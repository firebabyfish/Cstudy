//#include <iostream>
//using namespace std;
//#include <string>
//
////类模板
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
//		cout << this->m_Name << "的年龄是" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//
////区别1：类模板没有自动类型推导使用方式
//void test01()
//{
//	//Person p1("Tom", 18);  错误，无法自动推导类型
//	Person<string, int> p1("Tom", 18); //正确，只能使用指定类型
//
//	p1.showPerson();
//}
//
////区别2：类模板在模板参数列表里面可以有默认参数
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