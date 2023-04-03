//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int m_Age;
//	int* m_Height;
//
//	Person()
//	{
//		cout << "默认构造" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "有参构造" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;  //浅拷贝操作，编译器自动提供
//		m_Height = new int(*p.m_Height); //深拷贝操作
//	}
//
//	~Person()
//	{
//		//析构代码 将堆区开辟的数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		} //浅拷贝会使堆区内存重新释放 需要使用深拷贝
//		cout << "析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(18, 170);
//	cout << "p1的年龄为：" << p1.m_Age << endl;
//	cout << "p1的身高为：" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//	cout << "p2的身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}