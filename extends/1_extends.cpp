#include <iostream>
using namespace std;

// 基类
class Shape 
{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
	protected:
		int width;
		int height;
};

/* 一个派生类继承了所有的基类方法，但下列情况除外:
 *1、基类的构造函数、析构函数和拷贝构造函数。
 *2、基类的重载运算符。
 *3、基类的友元函数。
 */
class Rectangle: public Shape//继承public修饰符，关于继承修饰符权限问题，查看修饰符那一节。
{
	public:
		int getArea()
		{ 
			return (width * height); 
		}
};

int main(void)
{
	Rectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}

