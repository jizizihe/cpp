#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		void setWidth( double wid );
		double getWidth( void );

	private:
		double width;//只有类和友元函数可以访问私有成员。
};

// 成员函数定义
double Box::getWidth(void)//::是范围解析运算符，在 :: 运算符之前必须使用类名，调用成员函数是在对象上使用点运算符（.）。
{
	return width ;
}

void Box::setWidth( double wid )
{
	width = wid;
}

// 程序的主函数
int main( )
{
	Box box;

	// 不使用成员函数设置长度
	box.length = 10.0; // OK: 因为 length 是公有的
	cout << "Length of box : " << box.length <<endl;

	// 不使用成员函数设置宽度
	// box.width = 10.0; // Error: 因为 width 是私有的
	box.setWidth(20.0);  // 使用成员函数设置宽度
	cout << "Width of box : " << box.getWidth() <<endl;//可以正确访问私有数据

	return 0;
}

