//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ�� �����õĳ�Ա���� �����ĳ�Ա����
//		this->age = age;
//
//	}
//
//	Person& PersoAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//
//	//int m_Age;
//	int age;
//
//};
//
////1��������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ" << p1.age << endl;
//}
//
////2�����ض������� *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersoAddAge(p1).PersoAddAge(p1).PersoAddAge(p1);
//
//	cout << p2.age << endl;
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