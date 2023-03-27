#include <iostream>
using namespace std;
#include <string>

int* func()
{
	//使用new操作符可以将数据开辟在堆区上
	//指针本质依旧是局部变量，存放在栈区，指针保存的数据是在堆区
	int* p = new int(10); //new创建的是一个该类型的指针

	return p;
}

void test01() 
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据程序员管理开辟以及释放
	//若想释放堆区数据，需使用关键字delete

	delete p;
	cout << *p << endl;

}

void test02()
{
	//创建10整型数据的数组在堆区
	int* arr = new int[10]; //有10个数据的数组

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	delete[] arr; //释放数组需要加[]才可以

}

int main()
{
	////在堆区开辟数据
	//int* p = func();
	//
	//cout << *p << endl;

	//test01();
	test02();

	return 0;
}