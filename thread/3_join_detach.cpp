#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS     5

void *wait(void *t)
{
	int i;
	long tid;

	tid = *(long *)t;

	cout << "Thread with id : " << tid << "  ...exiting " << endl;
	sleep(8);
	pthread_exit(NULL);
}

int main ()
{
	int rc;
	int i;
	pthread_t threads[NUM_THREADS];
	pthread_attr_t attr;
	void *status;

	// 初始化并设置线程为可连接的（joinable）
	pthread_attr_init(&attr);
	//pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	for( i=0; i < NUM_THREADS; i++ ){
		cout << "main() : creating thread, " << i << endl;
		rc = pthread_create(&threads[i], NULL, wait, (void *)&i );
		if (rc){
			cout << "Error:unable to create thread," << rc << endl;
			exit(-1);
		} 
		sleep(1);
		/*分离线程：分离的线程相对而言独立于主线程，不需要主线程等待，会自动释放资源；
		 * joinable 的线程可以转换成 detached 的线程，但不能反向转换；
		 * detached 线程很适合主线程在无限循环或者在运行很长的服务，同时有很多个需要并行执行的任务
		 */
		/*else {
		 	pthread_detach(threads[i]);
		}*/
	}

	cout << "--------------------------------" << endl;
	// 删除属性，并等待其他线程
	pthread_attr_destroy(&attr);
	for( i=0; i < NUM_THREADS; i++ ){
		/*对于结合的线程，主线程需要用join()函数来等待子线程执行完毕获得返回值，并释放资源；*/
		rc = pthread_join(threads[i], &status);
		if (rc){
			cout << "Error:unable to join," << rc << endl;
			exit(-1);
		}
		cout << "Main: completed thread id :" << i ;
		cout << "  exiting with status :" << status << endl;
	}

	cout << "Main: program exiting." << endl;
	pthread_exit(NULL);
}

