//#include <iostream>
//using namespace std;
//#include <string>
//
////ģ�������
////ģ�岢�������ܵģ���Щ�ص��������ͣ������ࣩ��Ҫ�þ��廯��ʽ������ʵ��
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
////�Ա����������Ƿ����
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
////���þ��廯��Person�İ汾ʵ�ִ��룬���廯���ȵ���
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