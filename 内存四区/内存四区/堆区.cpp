#include <iostream>
using namespace std;
#include <string>

int* func()
{
	//ʹ��new���������Խ����ݿ����ڶ�����
	//ָ�뱾�������Ǿֲ������������ջ����ָ�뱣����������ڶ���
	int* p = new int(10); //new��������һ�������͵�ָ��

	return p;
}

void test01() 
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������ݳ���Ա�������Լ��ͷ�
	//�����ͷŶ������ݣ���ʹ�ùؼ���delete

	delete p;
	cout << *p << endl;

}

void test02()
{
	//����10�������ݵ������ڶ���
	int* arr = new int[10]; //��10�����ݵ�����

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	delete[] arr; //�ͷ�������Ҫ��[]�ſ���

}

int main()
{
	////�ڶ�����������
	//int* p = func();
	//
	//cout << *p << endl;

	//test01();
	test02();

	return 0;
}