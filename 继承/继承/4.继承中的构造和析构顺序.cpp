//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base的析构函数" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//};
//
////顺序：父类构造 -> 子类构造 -> 子类析构 -> 父类析构
//
//void test01()
//{
//	//Base b;
//
//	Son s;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}