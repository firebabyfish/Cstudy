//#include <iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//
//	//��Ա����ʵ��
//	//��˲����ó�Ա����ʵ�����������������
//	//void operator<<(cout, p) //�ᵼ�½��Ϊ p << cout
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
////ֻ����ȫ�ֺ�������ʽ��ʵ��
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