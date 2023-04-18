//#include <iostream>
//using namespace std;
//#include <string>
//
////模板局限性
////模板并不是万能的，有些特地数据类型（比如类）需要用具体化方式做特殊实现
//
//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
////对比两个数据是否相等
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////利用具体化的Person的版本实现代码，具体化优先调用
//template<>
//bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	bool ret = myCompare(a, b);
//
//	cout << "a == b  " << ret << endl;
//}
//
//void test02()
//{
//	Person p1("Tom", 18);
//	Person p2("tom", 18);
//
//	bool ret = myCompare(p1, p2);
//
//	cout << "p1 == p2  " << ret << endl;
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