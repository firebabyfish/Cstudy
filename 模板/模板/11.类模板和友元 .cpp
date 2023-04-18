//#include <iostream>
//using namespace std;
//#include <string>
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson1(Person<T1, T2>p) // 加了friend默认为全局函数
//	{
//		cout << p.m_Name << "的年龄为" << p.m_Age << endl;
//	}
//
//	//加一个空模板的参数列表与函数匹配
//	friend void printPerson2<>(Person<T1, T2>p);
//
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//
//	T1 m_Name;
//	T2 m_Age;
//
//};
//
////全局函数 类外实现(屎) 错误需要改正
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << p.m_Name << "的年龄为" << p.m_Age << endl;
//}
//
//void test01()
//{
//	Person<string, int>p("Tom", 18);
//	printPerson1(p);
//}
//
//void test02()
//{
//	Person<string, int>p("类外Tom", 18);
//	printPerson2(p);
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