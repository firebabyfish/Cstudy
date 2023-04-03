//#include <iostream>
//using namespace std;
//#include <string>
//
//void yinyongjichu()
//{
//	int a = 10;
//
//	//引用的本质相当于给变量起别名
//	//引用基本语法
//	int& b = a; //创建引用
//	b = 20;
//
//	//int &c; //错误，创建引用必须初始化
//	int& c = a; //一旦初始化就无法更改
//	c = b; //这是赋值，而非更改引用
//	
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//}
//
////使用引用进行数字交换
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//////引用做函数参数
////int main()
////{
////	int a = 10;
////	int b = 20;
////
////	cout << a << endl;
////	cout << b << endl;
////
////	swap(a, b);
////
////	cout << a << endl;
////	cout << b << endl;
////
////	system("pause");
////	return 0;
////}
//
//int& test01()
//{
//	int a = 10; //存放于栈区
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
////int main()
////{
////	//引用做函数的返回值
////	//1、不要返回局部变量的引用
////	/*int& ref = test01();
////
////	cout << ref << endl;
////	cout << ref << endl;*/
////
////	//2、函数的引用可以作为左值
////	int& ref = test02();
////
////	cout << ref << endl;
////	cout << ref << endl;
////
////	test02() = 1000;
////
////	cout << ref << endl;
////	cout << ref << endl;
////
////	system("pause");
////	return 0;
////}
//
//////引用的本质在c++内部是一个指针常量
////void func(int& ref)
////{
////	ref = 100;
////}
////int main()
////{
////	int a = 10;
////
////	int& ref = a; //自动转化为 int* const ref = &a; 指针常量是指针指向不可以改，也表明为何引用不可更改
////	ref = 20; //转换为 *ref = 20;
////
////	cout << a << endl;
////	cout << ref << endl;
////
////	func(a);
////
////	cout << a << endl;
////
////	system("pause");
////	return 0;
////}
//
////常量引用
////使用场景：用来修饰形参，防止误操作
//int main()
//{
//	//加上const之后，编译器将代码修改 int temp = 10; const int & ref = temp;
//	//int a = 10;
//	//const int& ref = 10; //引用必须引一块合法的内存空间
//	//ref = 20; //加入const之后变为只读，不可以修改
//
//	system("pause");
//	return 0;
//}