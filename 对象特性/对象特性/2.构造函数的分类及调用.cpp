//#include <iostream>
//using namespace std;
//#include <string>
//
////1�����캯���ķ��༰����
////����
////1���������ͷ���  2���в����޲�(Ĭ�Ϲ���)����
//class Person
//{
//public:
//	
//	int age;
//
//	//���캯��
//	Person()
//	{
//		cout << "�޲ι��캯��" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "�вι��캯��" << endl;
//	}
//	//�������캯��
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "�������캯��" << endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "��������" << endl;
//	}
//};
//
////����
//void test01()
//{
//	//1�����ŷ�
//	//Person p1; //Ĭ�Ϲ��캯������
//	//Person p2(10); //�вι��캯��
//	//Person p3(p2); //�������캯��
//	
//	//ע������1
//	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//
//	//2����ʾ��
//	Person p1; //Ĭ�Ϲ���
//	Person p2 = Person(10); //�вι���
//	Person p3 = Person(p2); //��������
//
//	//Person(10); //��������  �ص㣺��ǰ��ִ�н�������ע��
//	//cout << "flag" << endl;
//
//	//ע������2
//	//��Ҫ���� �������� ��ʼ����������
//	//Person(p3); //����������Ϊ Person��p3��== Person p3��
//
//	//3����ʽת����
//	Person p4 = 10; //�൱��д��  Person p4 = Person(10);
//	Person p5 = p4; //��������
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}