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
//	//ǰ��++����
//	MyInt& operator++()
//	{
//		++m_Num;
//
//		//��������
//		return *this;
//	}
//
//	//����++����
//	MyInt operator++(int) //int Ϊռλ��������������ǰ��++�ͺ���++
//	{
//		//�ȼ�¼ֵ
//		MyInt temp = *this;
//
//		//�ټ������++
//		m_Num++;
//
//		//��󷵻ؼ�¼ֵ
//		return temp;
//	}
//
//private:
//
//	int m_Num;
//
//};
//
////�����Ʋ�������������
//ostream& operator<<(ostream& cout, MyInt myint)
//{
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInt myint;
//	//ǰ��++
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