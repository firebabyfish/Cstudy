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
//	//手机品牌名
//	string m_pName;
//
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//
//};
//
////当其他类对象作为类成员 ，构造时先构造类对象，再构造自身（先 Phone 后 Person）,析构则与之相反
//
//class Person
//{
//public:
//																		  //== Phone p = Phone(name_2);
//	Person(string name_1, string name_2) :m_Name(name_1), m_Phone(name_2) //== Phone m_Phone = name_2;
//	{																	  //隐式转换法
//		cout << "Person" << endl;
//	}
//
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person person("Tom", "iPhone");
//	cout << person.m_Name << "拿着" << person.m_Phone.m_pName << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}