#include <iostream>
using namespace std;
#include <string>

//�º���д�����ֶ�����û�й̶���ʽ 


class MyPrint
{
public:

	//�´�ӡ����
	void operator()(string print)
	{
		cout << print << endl;
	}

	//�¼ӷ�
	int operator()(int a, int b)
	{
		return a + b;
	}

};

void test01()
{
	MyPrint myprint;

	myprint("�Ұ�ѧϰ��");
	int ret = myprint(1, 2);

	cout << ret << endl;

	//��������  MyPrint()  �������ʹ������Զ��ͷŵ�
	cout << MyPrint()(2, 4) << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}