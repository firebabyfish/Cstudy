//#include <iostream>
//#include <vector>
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
//	string m_Name;
//	int m_Age;
//
//};
//
//void test01()
//{
//	vector<Person> v;
//
//	Person p1("Tom", 18);
//	Person p2("Andy", 28);
//	Person p3("Mike", 50);
//
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it).m_Name << " " << "���䣺" << (*it).m_Age << endl;
//		cout << "������" << it->m_Name << " " << "���䣺" << it->m_Age << endl;
//	}
//
//}
//
////����Զ�������ָ��
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("Tom", 18);
//	Person p2("Andy", 28);
//	Person p3("Mike", 50);
//
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it)->m_Name << " " << "���䣺" << (*it)->m_Age << endl;
//	}
//
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