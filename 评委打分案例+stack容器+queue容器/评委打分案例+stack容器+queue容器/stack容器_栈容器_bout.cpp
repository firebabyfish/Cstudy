//#include <iostream>
//using namespace std;
//#include <stack>
//
///*
//* ���캯����
//- stack<T> stk;				//stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
//- stack(const stack& stk);  //�������캯��
//
//��ֵ������
//- stack& operator=(const stack& stk);  //���صȺŲ�����
//
//���ݴ�ȡ��
//- push(elem);  //��ջ�����Ԫ��
//- pop();	   //��ջ���Ƴ���һ��Ԫ��
//- top();	   //����ջ��Ԫ��
//
//��С������
//- empty();	   //�ж϶�ջ�Ƿ�Ϊ��
//- size();	   //����ջ�Ĵ�С
//*/
//
//void test01()
//{
//	//�ص㣺�Ƚ���������ݽṹ
//	stack<int>s;
//
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	s.push(50);
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�к��ջ����
//	while (!s.empty())
//	{
//		cout << "��ǰջ��Ϊ��" << s.top() << endl;
//		s.pop();
//	}
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
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