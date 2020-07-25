#include <iostream>
using namespace std;

int main ()
{
	/* 栈：在函数内部声明的所有变量都将占用栈内存。
	 * 堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。
	 * new 与 malloc() 函数相比，其主要的优点是，new 不只是分配了内存，它还创建了对象。
	 */
	double* pvalue  = NULL; // 初始化为 null 的指针
	
	if( !(pvalue  = new double ))//动态分配内存
	{
		cout << "Error: out of memory." <<endl;
		exit(1);

	}
	*pvalue = 29494.99;     // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // 释放内存

	return 0;
}

