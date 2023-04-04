//#include <iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//
//	//成员函数实现
//	//因此不能用成员函数实现左移运算符的重载
//	//void operator<<(cout, p) //会导致结果为 p << cout
//	//{
//
//	//}
//
//public:
//
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//
//	int m_A;
//	int m_B;
//
//};
//
////只能用全局函数的形式来实现
//ostream& operator<<(ostream &cout, Person& p)
//{
//	cout << p.m_A << "  " << p.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 10);
//
//	cout << p << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}