#include <iostream>
using namespace std;
#include <vector>

/*
- reserve(int len);			//����Ԥ��len��Ԫ��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
*/

void test01()
{
	int num = 0; //ͳ�����ݴ���
	int* p = NULL;
	vector<int>v1;
	v1.reserve(100000); //ͨ��Ԥ���ռ�������ݵĴ���
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}

	cout << "�ܹ�������" << num << "��" << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}