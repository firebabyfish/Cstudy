//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Public : public Base
//{
//public:
//	void func()
//	{
//		m_A = 10; //父类中的公共权限成员，在子类中依旧是公共权限
//		m_B = 10; //父类中的保护权限成员，在子类中依旧是保护权限
//		//m_C = 10; //父类中的公共权限成员，在子类中无法访问
//	}
//};
//
////保护继承
//class Protect : protected Base
//{
//public:
//	void func()
//	{
//		m_A = 10; //父类中的公共权限成员，在子类中变为了保护权限
//		m_B = 10; //父类中的保护权限成员，在子类中依旧是保护权限
//		//m_C = 10; //父类中的公共权限成员，在子类中无法访问
//	}
//};
//
////私有继承
//class Private : private Base
//{
//public:
//	void func()
//	{
//		m_A = 10; //父类中的公共权限成员，在子类中变为了私有权限
//		m_B = 10; //父类中的保护权限成员，在子类中变为了私有权限
//		//m_C = 10; //父类中的公共权限成员，在子类中无法访问
//	}
//};
//
//void test01()
//{
//	Public p1;
//	p1.m_A = 100;
//	//p1.m_B = 100; //到子类中依旧是保护权限，类外访问不到
//	//p1.m_C = 100; //私有
//
//	Protect p2;
//	//p2.m_A = 100; //保护继承使得子类中改变为了保护权限
//	//p2.m_B = 100;
//
//	Private p3;
//	//p2.m_A = 100; //私有继承使得子类中改变为了私有权限
//	//p2.m_B = 100; //保护继承使得子类中改变为了保护权限
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}