#include <iostream>
using namespace std;

class Person
{
public:
	
	int age;

	Person()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯��" << endl;
	}

	//��������
	~Person()
	{
		cout << "��������" << endl;
	}
};

//�������캯������ʱ��
//1��ʹ��һ��ֵ�Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(18);
	Person p2(p1);

	cout << p2.age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void Send01(Person p)
{}
void test02()
{
	Person p;
	Send01(p);
}

//3��ֵ��ʽ���ؾֲ�����
Person Send02()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = Send02();
}

int main()
{
	//test01();
	test02();
	//test03();

	system("pause");
	return 0;
}