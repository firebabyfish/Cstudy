//#include <iostream>
//using namespace std;
//#include <string>
//
//template<class T1, class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson1(Person<T1, T2>p) // ����friendĬ��Ϊȫ�ֺ���
//	{
//		cout << p.m_Name << "������Ϊ" << p.m_Age << endl;
//	}
//
//	//��һ����ģ��Ĳ����б��뺯��ƥ��
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
////ȫ�ֺ��� ����ʵ��(ʺ) ������Ҫ����
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << p.m_Name << "������Ϊ" << p.m_Age << endl;
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
//	Person<string, int>p("����Tom", 18);
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