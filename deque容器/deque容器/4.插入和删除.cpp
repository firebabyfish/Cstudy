//#include <iostream>
//using namespace std;
//#include <deque>
//
///*
//���˲��������
//push back(elem);		//������β�����һ������
//push front(elem);		//������ͷ������һ������
//pop_back();				//ɾ���������һ������
//pop_front();			//ɾ��������һ������
//
//ָ��λ�ò�����
//insert(pos,elem);		//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//insert(pos,n,elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ
//insert(pos,beg,end);	//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
//clear();				//�����������������
//erase(beg,end);			//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
//erase(pos);				//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//*/
//
//void printDeq(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " " ;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeq(d1);
//
//	//d1.push_back(100); //β��
//	//d1.push_front(88); //ͷ��
//	//printDeq(d1);
//
//	//d1.pop_back(); //βɾ
//	//d1.pop_front(); //ͷɾ
//	//printDeq(d1);
//
//	d1.insert(d1.begin(), 1000);
//	printDeq(d1);
//
//	d1.insert(d1.begin(), 3, 88);
//	printDeq(d1);
//
//	deque<int>d2;
//	d2.insert(d2.end(), d1.begin(), d1.end());
//	printDeq(d2);
//
//	//d2.erase(d2.begin(), d2.end()); //�ò�����ͬ��clear
//	//printDeq(d2);
//	
//	d2.erase(d2.begin());
//	printDeq(d2);
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