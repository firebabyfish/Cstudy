//#include <iostream>
//using namespace std;
//#include <string>
//
////��ģ��
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << this->m_Name << "��������" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//
////����1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//Person p1("Tom", 18);  �����޷��Զ��Ƶ�����
//	Person<string, int> p1("Tom", 18); //��ȷ��ֻ��ʹ��ָ������
//
//	p1.showPerson();
//}
//
////����2����ģ����ģ������б����������Ĭ�ϲ���
//void test02()
//{
//	Person<string, int> p2("Andy", 18);
//
//	p2.showPerson();
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}