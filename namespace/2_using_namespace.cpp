#include <iostream>
//using 指令也可以用来指定命名空间中的特定项目。
//例如：如果您只打算使用 std 命名空间中的 cout 部分，如下：
using std::cout;

// 第一个命名空间
namespace first_space{
	void func(){
		/*在使用 cout 时就可以不用加上命名空间名称作为前缀
		 *但是 std 命名空间中的其他项目仍然需要加上命名空间名称作为前缀，如：std::endl;
		 */
		cout << "Inside first_space" << std::endl;
	}
}
// 第二个命名空间
namespace second_space{
	void func(){
		cout << "Inside second_space" << std::endl;
	}
}
/* 使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。
 * 这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称
 */
using namespace first_space;
int main ()
{

	// 调用第一个命名空间中的函数
	func();

	return 0;
}

