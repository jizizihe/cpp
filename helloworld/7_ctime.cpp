#include <iostream>
#include <ctime>

using namespace std;

int main( )
{
	/* 1、当前日期与时间  */
	time_t now = time(0);//基于当前系统的当前日期/时间
	char* dt = ctime(&now);//把 now 转换为字符串形式
	cout << "本地日期和时间：" << dt;//dt有换行操作符

	tm *gmtm = gmtime(&now);// 把 now 转换为 tm 结构
	dt = asctime(gmtm);
	cout << "UTC 日期和时间："<< dt << endl;

	/* 2、tm 结构在 C/C++ 中处理日期和时间相关的操作 */
	tm *ltm = localtime(&now);

	// 输出 tm 结构的各个组成部分
	cout << "年: "<< 1900 + ltm->tm_year << endl;//自 1900 年起的年数，所以需要加190，所以需要加19000
	cout << "月: "<< 1 + ltm->tm_mon<< endl;//范围从 0 到 11，所以需要加1
	cout << "日: "<<  ltm->tm_mday << endl;
	cout << "时间: "<< ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
}

