#include <iostream>
using namespace std;

class Person
{
public:
	
	int age;

	Person()
	{
		cout << "无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "析构函数" << endl;
	}
};

//拷贝构造函数调用时机
//1、使用一个值已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(18);
	Person p2(p1);

	cout << p2.age << endl;
}

//2、值传递的方式给函数参数传值
void Send01(Person p)
{}
void test02()
{
	Person p;
	Send01(p);
}

//3、值方式返回局部对象
Person Send02()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = Send02();
}

int main()
{
	//test01();
	test02();
	//test03();

	system("pause");
	return 0;
}