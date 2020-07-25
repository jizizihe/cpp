#include <iostream>
using namespace std;

// 第一个命名空间
namespace first_space{
	void func(){
		cout << "Inside first_space" << endl;
	}
	// 第二个命名空间
	namespace second_space{
		void func(){
			cout << "Inside second_space" << endl;
		}
	}
}
//使用 :: 运算符来访问嵌套的命名空间中的成员,访问 namespace_name2 中的成员
using namespace first_space::second_space;
//using namespace first_space;//访问 namespace:name1 中的成员
int main ()
{
	// 调用第二个命名空间中的函数
	func();

	return 0;
}

