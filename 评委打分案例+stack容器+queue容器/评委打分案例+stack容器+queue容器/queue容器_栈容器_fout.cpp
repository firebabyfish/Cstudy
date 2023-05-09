#include <iostream>
using namespace std;
#include <queue>

/*
* ���캯����
- queue<T> stk;				//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
- queue(const queue& stk);  //�������캯��

��ֵ������
- queue& operator=(const queue& stk);  //���صȺŲ�����

���ݴ�ȡ��
- push(elem);  //��ջ�����Ԫ��
- pop();	   //��ջ���Ƴ���һ��Ԫ��
- top();	   //����ջ��Ԫ��

��С������
- empty();	   //�ж϶�ջ�Ƿ�Ϊ��
- size();	   //����ջ�Ĵ�С
*/

void test01()
{
	//�ص㣺�Ƚ���������ݽṹ
	queue<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout << "ջ�Ĵ�С��" << s.size() << endl;

	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�к��ջ����
	while (!s.empty())
	{
		cout << "��ǰ��ͷΪ��" << s.front() << " " ;
		cout << "��ǰ��βΪ��" << s.back() << endl;
		s.pop();
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}