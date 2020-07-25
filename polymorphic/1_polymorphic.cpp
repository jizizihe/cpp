#include <iostream>
using namespace std;
/* 编译时多态性：通过“函数重载和操作符重载”来实现，这也称为静态绑定或早期绑定。
 * 运行时多态性：它通过“方法”覆盖来实现，也称为动态绑定或后期绑定。
 */
class Shape {
	public:
		/* void draw(){....} 会让多态输出一致。
		 * 1、导致错误输出的原因是，调用函数 area() 被编译器设置为基类中的版本，这就是所谓的静态多态
		 * 函数调用在程序执行前就准备好了。有时候这也被称为早绑定，因为 area() 函数在程序编译期间就已经设置好了。
		 * 2、所以需要在draw()中加入关键字 virtual，表示为“虚函数”，
		 * 在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。。
		 * 们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。
		 */
		virtual void draw(){
			cout<<"drawing..."<<endl;
		}
};
//多态按字面的意思就是多种形态。
//当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
class Rectangle: public Shape
{
	public:
		void draw()
		{
			cout<<"drawing rectangle..."<<endl;
		}
};
class Circle: public Shape
{
	public:
		void draw()
		{
			cout<<"drawing circle..."<<endl;
		}
};  
int main(void) {
	Shape *s;
	Shape sh;
	Rectangle rec;
	Circle cir;
	
	s=&sh;
	s->draw();//打印Shape的draw 
	
	s=&rec;
	s->draw();//打印Rectangle的draw

	s=&cir;
	s->draw();//打印Circle的draw
}

