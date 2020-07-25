#include <iostream>
using namespace std;

class Adder{
	/* 公有成员 addNum 和 getTotal 是对外的接口，用户需要知道它们以便使用类。
	 * 私有成员 total 是用户不需要了解的，但又是类能正常工作所必需的。
	 */
	public:
		// 构造函数
		Adder(int i = 0)
		{
			total = i;
		}
		// 对外的接口
		void addNum(int number)
		{
			total += number;
		}
		// 对外的接口
		int getTotal()
		{
			return total;
		};
	private:
		// 对外隐藏的数据
		int total;
};
int main( )
{
	Adder a;

	a.addNum(10);
	a.addNum(20);
	a.addNum(30);

	cout << "Total " << a.getTotal() <<endl;
	return 0;
}

