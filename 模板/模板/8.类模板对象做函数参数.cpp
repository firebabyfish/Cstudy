//#include <iostream>
//using namespace std;
//#include <string>
//
////��ģ���������������
//
//template<class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << m_Name << "������Ϊ" << m_Age << endl;
//	}
//
//	string m_Name;
//	int m_Age;
//
//};
//
////1��ָ���������ͣ���ã�
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("Tom", 18);
//	printPerson1(p);
//}
//
////2������ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1���ͣ�" << typeid(T1).name() << endl;
//	cout << "T2���ͣ�" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("Andy", 28);
//	printPerson2(p);
//}
//
////3��������ģ�廯
//template<class T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T���ͣ�" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("Mike", 38);
//	printPerson3(p);
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