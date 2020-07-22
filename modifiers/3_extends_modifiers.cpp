#include<iostream>
#include<assert.h>
using namespace std;

class A{
	public:
		int a;
		A(){
			a1 = 1;
			a2 = 2;
			a3 = 3;
			a = 4;
		}
		void fun(){
			cout << a << endl;    //正确
			cout << a1 << endl;   //正确
			cout << a2 << endl;   //正确
			cout << a3 << endl;   //正确
		}
	public:
		int a1;
	protected://保护成员在派生类（即子类）中是可访问的。
		int a2;
	private://只有类和友元函数才能访问私有成员
		int a3;
};

class B : public A{//如果继承时不显示声明是 private，protected，public 继承，则默认是 private 继承
	public:
		int a;
		B(int i){
			A();
			a = i;
		}
		void fun(){
			cout << a << endl;       //正确，public成员
			cout << a1 << endl;       //正确，基类的public成员，在派生类中仍是public成员。
			cout << a2 << endl;       //正确，基类的protected成员，在派生类中仍是protected可以被派生类访问。
			//cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
		}
};

class C : protected A{
	public:
		int a;
		C(int i){
			A();
			a = i;
		}
		void fun(){
			cout << a << endl;       //正确，public成员。
			cout << a1 << endl;       //正确，基类的public成员，在派生类中变成了protected，可以被派生类访问。
			cout << a2 << endl;       //正确，基类的protected成员，在派生类中还是protected，可以被派生类访问。
			//cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
		}
};

class D : private A{
	public:
		int a;
		D(int i){
			A();
			a = i;
		}
		void fun(){
			cout << a << endl;       //正确，public成员。
			cout << a1 << endl;       //正确，基类public成员,在派生类中变成了private,可以被派生类访问。
			cout << a2 << endl;       //正确，基类的protected成员，在派生类中变成了private,可以被派生类访问。
			//cout << a3 << endl;       //错误，基类的private成员不能被派生类访问。
		}
};

int main(){
	B b(10);
	cout << "public 继承：" << b.a << endl;
	cout << "public 继承：" << b.a1 << endl;   //正确
	//cout << b.a2 << endl;   //错误，类外不能访问protected成员
	//cout << b.a3 << endl;   //错误，类外不能访问private成员
	C c(20);
	cout << "protected 继承："<< c.a << endl;//正确。public成员
	//cout << c.a1 << endl;//错误，protected成员不能在类外访问。
	//cout << c.a2 << endl;//错误，protected成员不能在类外访问。
	//cout << c.a3 << endl;//错误，private成员不能在类外访问。
	D d(10);
	cout <<	"private 继承：" << d.a << endl;       //正确。public成员
	//cout << d.a1 << endl;      //错误，private成员不能在类外访问。
	//cout << d.a2 << endl;      //错误, private成员不能在类外访问。
	//cout << d.a3 << endl;      //错误，private成员不能在类外访问。

	return 0;
}

