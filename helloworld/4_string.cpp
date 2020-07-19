#include <iostream>
#include <cstring>//字符数组需要这个头文件，而string需要下面那个。
#include <string>

using namespace std;

int main ()
{
	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int  len ;

	strcpy( str3, str1);// 复制 str1 到 str3
	cout << "strcpy( str3, str1) : " << str3 << endl;

	strcat( str1, str2);// 连接 str1 和 str2
	cout << "strcat( str1, str2): " << str1 << endl;

	len = strlen(str1);// 连接后，str1 的总长度
	cout << "strlen(str1) : " << len << endl << endl;

/* c++新增了string类，可直接对字符串操作，而不是字符数组  */
	string string1 = "Hello";
	string string2 = "World";
	string string3;


	string3 = string1;// 复制 str1 到 str3
	cout << "string3 : " << string3 << endl;

	string3 = string1 + string2;// 连接 str1 和 str2
	cout << "string1 + string2 : " << string3 << endl;

	len = string3.size();// 连接后，str3 的总长度
	cout << "string3.size() :  " << len << endl;

	return 0;
}

