//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son : public Base // 错误，必须要知道父类中的T类型才能继承给子类 
//class Son1 : public Base<int> // 给他一个数据类型
//{
//
//};
//
////直接使用类模板可以直接继承父类模板
//template<class T1, class T2>
//class Son2 : public Base<T2>
//{
//	T1 obj;
//};
//
//void test01()
//{
//	Son1 s1;
//	Son2<int, char>s2;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}