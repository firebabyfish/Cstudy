//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 10;
//	}
//
//	void func()
//	{
//		cout << "父类调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "(int a)父类调用" << endl;
//	}
//
//	int m_A;
//
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 20;
//	}
//
//	void func()
//	{
//		cout << "子类调用" << endl;
//	}
//
//	int m_A;
//
//};
//
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl; //调用子类的 m_A
//	cout << s.Base::m_A << endl; //调用父类的 m_A
//	s.func(); 
//	s.Base::func(); //与成员变量一样，优先调用自身函数
//
//	//如果子类中出现和父类同名的成员函数，那子类会隐藏掉父类中所有的同名成员
//	//s.func(100);
//	s.Base::func(100);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}