//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base static func �ĵ���" << endl;
//	}
//
//};
//
//int Base::m_A = 10;
//
//class Son : public Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son static func �ĵ���" << endl;
//	}
//
//};
//
//int Son::m_A = 20;
//
//void test01()
//{
//	//1��ͨ���������
//	//Son s;
//	//cout << s.m_A << endl;
//	//cout << s.Base::m_A << endl;
//
//	//2��ͨ����������
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//}
//
////������ͬ��
//void test02()
//{
//	//Son s;
//	//s.func();
//	//s.Base::func();
//
//	Son::func();
//	Son::Base::func();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}