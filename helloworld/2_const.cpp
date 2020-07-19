#include <iostream>
using namespace std;

int main()
{
	const int  LENGTH = 10;
	const int  WIDTH  = 5;
	const char NEWLINE = '\n';
	int area;  

	//LENGTH = 20;//限定一个变量不允许被改变，产生静态作用
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE;
	return 0;
}

