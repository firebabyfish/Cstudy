//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	//thisָ��ı�����ָ�볣��  ָ���ָ���ǲ������޸ĵ�
//	//�൱�� Person * const this; �����޸�ֵ
//	//const Person * const this; �ټ�һ��const�򲻿����޸�ֵ
//	//�ڳ�Ա�����������const�����ε���thisָ������ָ���ֵҲ�������޸�
//	void showPerson() const
//	{
//		//this->m_A = 10;
//		//this = NULL: //thisָ��ָ���޷��޸�
//		m_B = 10;
//	}
//
//	void getPerson()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B; //����mutable,���ڳ���������Ҳ���޸�ֵ
//
//};
//
//void test01()
//{
//	//������
//	const Person p;
//	//p.m_A = 10; //���ɲ������޸�
//	p.m_B = 20; //��Ϊ����ֵ���ڳ����������ɿ��Ը���
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.getPerson(); //���ǳ������������޷������������
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}