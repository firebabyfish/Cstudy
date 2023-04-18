//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	//this指针的本质是指针常量  指针的指向是不可以修改的
//	//相当于 Person * const this; 可以修改值
//	//const Person * const this; 再加一个const则不可以修改值
//	//在成员函数后面加上const，修饰的是this指向，让其指向的值也不可以修改
//	void showPerson() const
//	{
//		//this->m_A = 10;
//		//this = NULL: //this指针指向无法修改
//		m_B = 10;
//	}
//
//	void getPerson()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B; //加上mutable,则在常函数里面也可修改值
//
//};
//
//void test01()
//{
//	//常对象
//	const Person p;
//	//p.m_A = 10; //依旧不可以修改
//	p.m_B = 20; //作为特殊值，在常对象当中依旧可以更改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.getPerson(); //不是常函数，所以无法被常对象调用
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}