//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数 所属的成员对象
//		this->age = age;
//
//	}
//
//	Person& PersoAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	//int m_Age;
//	int age;
//
//};
//
////1、解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为" << p1.age << endl;
//}
//
////2、返回对象本身用 *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersoAddAge(p1).PersoAddAge(p1).PersoAddAge(p1);
//
//	cout << p2.age << endl;
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