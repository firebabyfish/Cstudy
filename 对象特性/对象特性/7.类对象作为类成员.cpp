//#include <iostream>
//using namespace std;
//#include <string>
//
//class Phone
//{
//public:
//
//	Phone(string pName) :m_pName(pName)
//	{
//		cout << "Phone" << endl;
//	}
//
//	//�ֻ�Ʒ����
//	string m_pName;
//
//	~Phone()
//	{
//		cout << "Phone����" << endl;
//	}
//
//};
//
////�������������Ϊ���Ա ������ʱ�ȹ���������ٹ��������� Phone �� Person��,��������֮�෴
//
//class Person
//{
//public:
//																		  //== Phone p = Phone(name_2);
//	Person(string name_1, string name_2) :m_Name(name_1), m_Phone(name_2) //== Phone m_Phone = name_2;
//	{																	  //��ʽת����
//		cout << "Person" << endl;
//	}
//
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//
//	~Person()
//	{
//		cout << "Person����" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person person("Tom", "iPhone");
//	cout << person.m_Name << "����" << person.m_Phone.m_pName << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}