#include <iostream>
using namespace std;

//����ȫ�ֱ���
int ga = 10;
int gb = 10;

//const���ε�ȫ�ֱ���
const int cga = 10;
const int cgb = 20;

int main()
{
	//�����ֲ�����
	int a = 10;
	int b = 20;

	//������̬����
	static int sa = 10;
	static int sb = 20;

	//const���εľֲ�����
	const int ca = 10;
	const int cb = 20;

	//��ӡ��ַ����������������úܽ������������ȫ����
	cout << (int)&a << endl;
	cout << (int)&b << endl;

	//ȫ�ֱ�����ֲ�������Զ
	cout << (int)&ga << endl;
	cout << (int)&gb << endl;

	//���Է��־�̬������ȫ�ֱ�����������������ȫ����
	cout << (int)&sa << endl;
	cout << (int)&sb << endl;

	//const���ε�ȫ�ֱ�����ȫ�������ֲ���������
	cout << (int)&cga << endl;
	cout << (int)&cgb << endl;
	cout << (int)&ca << endl;
	cout << (int)&cb << endl;

	return 0;
}