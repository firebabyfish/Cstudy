//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	int m_Age;
//	int* m_Height;
//
//	Person()
//	{
//		cout << "Ĭ�Ϲ���" << endl;
//	}
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "�вι���" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "��������" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;  //ǳ�����������������Զ��ṩ
//		m_Height = new int(*p.m_Height); //�������
//	}
//
//	~Person()
//	{
//		//�������� ���������ٵ��������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		} //ǳ������ʹ�����ڴ������ͷ� ��Ҫʹ�����
//		cout << "��������" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(18, 170);
//	cout << "p1������Ϊ��" << p1.m_Age << endl;
//	cout << "p1�����Ϊ��" << *p1.m_Height << endl;
//
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//	cout << "p2�����Ϊ��" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}