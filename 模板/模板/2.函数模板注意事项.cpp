//#include <iostream>
//using namespace std;
//
//函数模板注意事项
//
//template<class T> //typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//1、自动类型推导，必须推导出一致的类型，T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	mySwap(a, b); //正确
//	mySwap(a, c); //推导不出一致的T类型，错误
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//2、模板必须要确定出 T 的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//int main()
//{
//	test01();
//
//	func(); //错误
//	func<char>();
//
//	system("pause");
//	return 0;
//}