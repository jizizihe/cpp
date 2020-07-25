#include <iostream>

using namespace std;

class Box
{
	public:
		static int objectCount;
		// 构造函数定义
		Box(double l=2.0, double b=2.0, double h=2.0)
		{
			cout <<"Constructor called." << endl;
			length = l;
			breadth = b;
			height = h;
			// 每次创建对象时增加 1
			objectCount++;
		}
		
		double Volume()
		{
			return length * breadth * height;
		}
		/*静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
		 *静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
		 *普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。
		 */
		static int getCount()
		{
			return objectCount;
		}

	private:
		double length;     // 长度
		double breadth;    // 宽度
		double height;     // 高度
};

/* 静态成员变量在类的所有对象中是共享的。
 * 如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
 * 我们不能把静态成员的初始化放置在类的定义中，
 * 但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化
 */
int Box::objectCount = 0;

int main(void)
{
	Box Box1(3.3, 1.2, 1.5);    // 声明 box1
	// 输出对象的总数
	cout << "静态成员变量 Count: " << Box::objectCount << endl;
	cout << "静态成员函数 Count: " << Box::getCount() << endl;

	Box Box2(8.5, 6.0, 2.0);    // 声明 box2
	cout << "静态成员变量 Count: " << Box::objectCount << endl;
	cout << "静态成员函数 Count: " << Box::getCount() << endl;

	return 0;
}

