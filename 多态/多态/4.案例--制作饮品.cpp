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
//		cout << "��ˮ" << endl;
//	}
//	void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	void Pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	void Put()
//	{
//		cout << "����ţ�̺���" << endl;
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
//		cout << "��ˮ" << endl;
//	}
//	void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	void Pour()
//	{
//		cout << "���뱭��" << endl;
//	}
//	void Put()
//	{
//		cout << "���Ӷ���" << endl;
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