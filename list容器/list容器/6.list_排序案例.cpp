#include <iostream>
using namespace std;
#include <list>

/*
������������������������������ͬ������߽���
*/

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

public:
	string m_Name;
	int m_Age;
	int m_Height;

};

void printList(const list<Person>& lst)
{
	for (list<Person>::const_iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << (*it).m_Height << endl;
	}
}

//ָ���������
bool comparePerson(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}

void test01()
{
	list<Person> lst;
	Person p1("����", 18, 156);
	Person p2("����", 27, 160);
	Person p3("����", 18, 185);
	Person p4("����", 45, 188);
	Person p5("����", 18, 170);

	lst.push_back(p1);
	lst.push_back(p2);
	lst.push_back(p3);
	lst.push_back(p4);
	lst.push_back(p5);

	printList(lst);
	cout << "�����" << endl;
	lst.sort(comparePerson);
	printList(lst);

}

int main()
{
	test01();

	system("pause");
	return 0;
}