//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- reserve(); //��ת����
//- sort;		 //��������
//*/
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst;
//	lst.push_back(20);
//	lst.push_back(10);
//	lst.push_back(30);
//	lst.push_back(50);
//	lst.push_back(40);
//	printList(lst); //20 10 30 50 40
//
//	//��ת
//	lst.reverse(); //40 50 30 10 20
//	printList(lst);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//sort(lst.begin(), lst.end());
//	//��֧�ַ���������ʵ��������������ڲ����ṩ��Ա�㷨
//
//	//Ĭ������(С --> ��)
//	lst.sort(); //10 20 30 40 50
//	printList(lst);
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