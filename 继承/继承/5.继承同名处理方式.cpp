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
//		cout << "�������" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "(int a)�������" << endl;
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
//		cout << "�������" << endl;
//	}
//
//	int m_A;
//
//};
//
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl; //��������� m_A
//	cout << s.Base::m_A << endl; //���ø���� m_A
//	s.func(); 
//	s.Base::func(); //���Ա����һ�������ȵ���������
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա����������������ص����������е�ͬ����Ա
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