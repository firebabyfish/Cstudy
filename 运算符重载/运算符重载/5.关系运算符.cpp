//#include <iostream>
//using namespace std;
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
//	bool operator==(Person& p)
//	{
//		if (m_Age == p.m_Age && m_Name == p.m_Name)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 10);
//
//	if (p1 == p2)
//	{
//		cout << "��������ͬһ����" << endl;
//	}
//	else
//	{
//		cout << "�������ǲ�ͬ����" << endl;
//	}
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