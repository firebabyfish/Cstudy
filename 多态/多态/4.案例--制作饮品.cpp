//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void Pour() = 0;
//	virtual void Put() = 0;
//
//	void Make()
//	{
//		Boil();
//		Brew();
//		Pour();
//		Put();
//	}
//
//};
//
//class Coffee : public Base
//{
//public:
//
//	void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	void Pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	void Put()
//	{
//		cout << "加入牛奶和糖" << endl;
//	}
//
//};
//
//class Tea : public Base
//{
//public:
//
//	void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	void Pour()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	void Put()
//	{
//		cout << "不加东西" << endl;
//	}
//
//};
//
////void Work()
////{
////	Base* drink = new Coffee;
////
////	drink->Make();
////	delete drink;
////
////	drink = new Tea;
////	
////	drink->Make();
////	delete drink;
////
////}
//
//void Work(Base* drink)
//{
//	drink->Make();
//	delete drink;
//}
//
//void test01()
//{
//	Work(new Coffee);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}