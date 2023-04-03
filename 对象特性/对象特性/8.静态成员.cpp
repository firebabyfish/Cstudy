//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	//静态成员变量
//	//1、所有对象都共享同一份数据
//	//2、编译阶段分配内存
//	//3、类内声明，类外初始化操作
//	//4、静态成员变量也有访问权限
//	static int m_A;
//
//	int m_B;
//
//	//静态成员函数
//	//1、所有对象共享同一个函数
//	//2、只能访问静态成员变量
//	//3、静态成员函数也有访问权限
//	static void func()
//	{
//		cout << "静态成员函数" << endl;
//		cout << m_A << endl; //可以访问静态成员变量
//		//cout << m_B << endl; 静态成员函数只能访问静态成员变量，因为静态成员函数无法区分该变量是哪一对象的
//	}
//
//};
//
//int Person::m_A = 100;
//
//void test01()
//{
//	Person p;
//	Person p2;
//
//	p2.m_A = 200; //p1和p2的 m_A（静态变量） 是共享的
//
//	cout << p.m_A << endl;
//}
//
//void test02()
//{
//	//静态成员变量不属于某个对象，所有对象共享同一份数据
//	//因此有两种访问方式
//
//	//1、通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2、通过类名进行访问
//	cout << Person::m_A << endl;
//
//}
//
//void test03()
//{
//	//1、通过对象访问
//	Person p;
//	p.func();
//
//	//2、通过类名访问
//	Person::func();
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}