#include <iostream>
using namespace std;
#include <string>

//仿函数写法多种多样，没有固定形式 


class MyPrint
{
public:

	//仿打印函数
	void operator()(string print)
	{
		cout << print << endl;
	}

	//仿加法
	int operator()(int a, int b)
	{
		return a + b;
	}

};

void test01()
{
	MyPrint myprint;

	myprint("我爱学习！");
	int ret = myprint(1, 2);

	cout << ret << endl;

	//匿名函数  MyPrint()  该语句中使用完会自动释放掉
	cout << MyPrint()(2, 4) << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}