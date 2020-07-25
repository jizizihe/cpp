#include <iostream>
using namespace std;

/*1、如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类
 *2、C++ 接口是使用抽象类来实现的，抽象类与数据抽象(1_abstract_capsulation.cpp)互不混淆，
 *	 数据抽象是一个把实现细节与相关的数据分离开的概念。
 *3、抽象类不能被用于实例化对象，它只能作为接口使用。如果试图实例化一个抽象类的对象，会导致编译错误。
 */
class Shape 
{
	public:
		virtual int getArea() = 0;//提供接口框架的纯虚函数
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

// 派生类
class Rectangle: public Shape
{
	public:
		int getArea()
		{ 
			return (width * height); 
		}
};
class Triangle: public Shape
{
	public:
		int getArea()
		{ 
			return (width * height)/2; 
		}
};

int main(void)
{
	Rectangle Rect;
	Triangle  Tri;

	Rect.setWidth(5);
	Rect.setHeight(7);
	// 输出对象的面积
	cout << "Total Rectangle area: " << Rect.getArea() << endl;

	Tri.setWidth(5);
	Tri.setHeight(7);
	// 输出对象的面积
	cout << "Total Triangle area: " << Tri.getArea() << endl; 

	return 0;
}

