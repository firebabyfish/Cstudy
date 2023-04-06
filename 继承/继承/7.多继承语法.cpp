//#include <iostream>
//using namespace std;
//
//class Base1
//{
//public:
//
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//
//};
//
//class Base2
//{
//public:
//
//	Base2()
//	{
//		m_B = 200;
//	}
//
//	int m_B;
//
//};
//
////用逗号隔开可以继承多个父类，但实际应用当中不提倡
//class Son : public Base1, public Base2
//{
//public:
//
//	Son()
//	{
//		m_C = 300;
//	}
//
//	int m_C = 300;
//
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "sizeof Son = " << sizeof(s) << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}