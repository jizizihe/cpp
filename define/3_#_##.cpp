#include <iostream>
using namespace std;

#define MKSTR( x ) #x//# 运算符会把replacement-text令牌转换为用引号引起来的字符串
#define concat(a, b) a ## b//运算符用于连接两个令牌

int main ()
{
	int xy = 100;
	
	cout << MKSTR(HELLO C++) << endl;
	cout << concat(x, y) << endl;

	return 0;
}

