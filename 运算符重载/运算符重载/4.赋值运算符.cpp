//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	int *m_Age;
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//���ظ�ֵ�����
//	void operator=(Person& p)
//	{
//		//�������ṩǳ����
//		//m_Age = p.m_Age;
//
//		//�ж��Ƿ��������ڶ����������Ӧ����������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//���
//		m_Age = new int(*p.m_Age);
//
//	}
//
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//
//	p2 = p1;
//
//	cout << *p2.m_Age << endl;
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