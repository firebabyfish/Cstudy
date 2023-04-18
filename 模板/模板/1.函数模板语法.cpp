//#include <iostream>
//using namespace std;
//
////两个整型交换函数
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////两个浮点型交换函数
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的 T 不要报错，T 是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	double c = 1.01;
//	double d = 12.34;
//	//swapInt(a, b);
//	//swapDouble(c, d);
//
//	//1、自动变量法
//	mySwap(a, b);
//	//2、显示指定类型
//	mySwap<double>(c, d);
//
//	cout << "a = " << a << endl << "b = " << b << endl;
//	cout << "c = " << c << endl << "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}