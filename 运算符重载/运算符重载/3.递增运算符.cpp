//#include <iostream>
//using namespace std;
//
//class MyInt
//{
//	friend ostream& operator<<(ostream& cout, MyInt myint);
//
//public:
//
//	MyInt()
//	{
//		m_Num = 0;
//	}
//
//	//前置++重载
//	MyInt& operator++()
//	{
//		++m_Num;
//
//		//返回自身
//		return *this;
//	}
//
//	//后置++重载
//	MyInt operator++(int) //int 为占位参数，用来区分前置++和后置++
//	{
//		//先记录值
//		MyInt temp = *this;
//
//		//再计算后置++
//		m_Num++;
//
//		//最后返回记录值
//		return temp;
//	}
//
//private:
//
//	int m_Num;
//
//};
//
////对左移操作符进行重载
//ostream& operator<<(ostream& cout, MyInt myint)
//{
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInt myint;
//	//前置++
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}