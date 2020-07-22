#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength( double len );
		double getLength( void );
		/* 类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
		 * 构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。
		 * 构造函数可用于为某些成员变量设置初始值。
		 */
		Line(double len);  // 这是构造函数,也可以声明成不带参数的Line()，

	private:
		double length;
};

// 成员函数定义，包括构造函数
Line::Line( double len)
{
	cout << "Object is being created, length = " << len << endl;
	length = len;
}

/* 下面构造函数与上面的构造函数一样。
 * Line::Line( double len): length(len)
 * {
 * 	 cout << "Object is being created, length = " << len << endl;
 * }
 * 假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，如下
 * C::C( double a, double b, double c): X(a), Y(b), Z(c) {....}
 */

void Line::setLength( double len )
{
	length = len;
}

double Line::getLength( void )
{
	return length;
}
// 程序的主函数
int main( )
{
	Line line(10.0);

	// 获取默认设置的长度
	cout << "Length of line : " << line.getLength() <<endl;
	// 再次设置长度
	line.setLength(6.0); 
	cout << "Length of line : " << line.getLength() <<endl;

	return 0;
}

