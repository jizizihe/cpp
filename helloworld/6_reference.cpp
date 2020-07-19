#include <iostream>

using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues( int i )
{
	return vals[i];   // 返回第 i 个元素的引用
}

// 函数定义
void swap(int& x, int& y)
{
	int temp;
	temp = x; /* 保存地址 x 的值 */
	x = y;    /* 把 y 赋值给 x */
	y = temp; /* 把 x 赋值给 y  */

	return;
}

int main ()
{
	/* 1、引用基本应用  */
	int    i;// 声明简单的变量
	double d;
	int&    r = i;// 声明引用变量
	double& s = d;

	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r  << endl;
	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r  << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s  << endl << endl;
	/* 2、引用作为参数 */
	int a = 100;// 局部变量声明
	int b = 200;

	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;

	swap(a, b);//调用函数来交换值

	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl << endl;

	/* 3、引用作为返回值 */
	cout << "改变前的值" << endl;
	for ( int i = 0; i < 5; i++ )
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	setValues(1) = 20.23; // 改变第 2 个元素
	setValues(3) = 70.8;  // 改变第 4 个元素

	cout << "改变后的值" << endl;
	for ( int i = 0; i < 5; i++ )
	{
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	
	return 0;
}

