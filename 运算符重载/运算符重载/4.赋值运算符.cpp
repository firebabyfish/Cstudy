//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	int *m_Age;
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//重载赋值运算符
//	void operator=(Person& p)
//	{
//		//编译器提供浅拷贝
//		//m_Age = p.m_Age;
//
//		//判断是否有数据在堆区，如果有应先清空再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//	}
//
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//
//	p2 = p1;
//
//	cout << *p2.m_Age << endl;
//	
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}