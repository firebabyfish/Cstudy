//#include <iostream>
//using namespace std;
//
////类模板成员函数创建时机
////类模板中成员函数在调用时采取创建
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "show Person 1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "show Person 2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//
//	T obj;
//
//	//类模板中的成员函数
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//};
//
//void test01()
//{
//	//类型确定才能调用函数(注意时机)
//	MyClass<Person1>mc1;
//	mc1.func1();
//	//mc1.func2();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}