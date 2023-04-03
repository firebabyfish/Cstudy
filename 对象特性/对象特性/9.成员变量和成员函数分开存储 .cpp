//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int m_A;
//	static int m_B;
//};
//
//int Person::m_B = 10;
//
//void test01()
//{
//	Person p;
//	//空对象所占内存空间为：1
//	//C++编译器会给每个空对象也分配一个字节空间，来区分空对象所占内存的位置
//	//每个空对象都应该有一个独一无二的内存地址
//	cout << "p所占内存为:" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << sizeof(p) << endl; //静态不属于某个类所以会增加内存
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