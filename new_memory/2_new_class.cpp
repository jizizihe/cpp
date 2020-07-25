#include <iostream>
using namespace std;

class Box
{
	public:
		Box() { 
			cout << "调用构造函数！" <<endl; 
		}
		~Box() { 
			cout << "调用析构函数！" <<endl; 
		}
};

int main( )
{
	/*如果要为一个包含四个 Box 对象的数组分配内存，构造函数将被调用 2 次，
	 * 同样地，当删除这些对象时，析构函数也将被调用相同的次数（2次）。
	 */
	Box* myBoxArray = new Box[2];

	delete [] myBoxArray; // 删除数组
	return 0;
}

