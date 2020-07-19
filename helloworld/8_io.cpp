#include <iostream>

using namespace std;

int main( )
{
	char name[50];
/* 1、标准输入输出流 */
	cout << "请输入您的名称:";
	cin >> name;
	cout << "您的名称是:" << name << endl << endl;
/* 2、标准错误流 */
	char str[] = "Unable to read....";
	cerr << "Error message : " << str << endl << endl;
/* 3、标准日志流 */
	char str2[] = "today is nice day....";
	clog << "message : " << str2 << endl;
}

