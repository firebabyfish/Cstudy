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
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).m_Name << " " << "年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << " " << "年龄：" << it->m_Age << endl;
//	}
//
//}
//
////存放自定义数据指针
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("Tom", 18);
//	Person p2("Andy", 28);
//	Person p3("Mike", 50);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it)->m_Name << " " << "年龄：" << (*it)->m_Age << endl;
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