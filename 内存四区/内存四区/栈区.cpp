#include <iostream>
using namespace std;

//栈区数据注意事项 --- 不要返回局部变量的地址
//栈区的数据由编译器管理开辟的释放

int* func(int b) //形参也放在栈区
{
	b = 100;
	int a = 10; //局部变量，存放在栈区，栈区的数据在函数执行完成后会自行释放
	return &a; //返回局部变量的地址
}

int main()
{
	//接受返回值
	int* p = func(1);

	cout << *p << endl; //打印返回值,第一次会保留数据
	cout << *p << endl; //打印一次便会被编译器释放，所以第二次数据消失

	return 0;
}