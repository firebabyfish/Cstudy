//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- assign(begin, end);				//��[begin, end)�����е����ݿ�����ֵ������
//- assign(n, elem);					//��n��elem��ֵ������
//- list& operator=(const list& lst);	//����=������
//- swap(lst);						//��lst�뱾���Ԫ�ػ���
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
//	list<int> lst1;
//	lst1.push_back(10);
//	lst1.push_back(20);
//	lst1.push_back(30);
//	lst1.push_back(40);
//	lst1.push_back(50);
//	printList(lst1);
//
//	list<int> lst2;
//	lst2.assign(lst1.begin(), lst1.end());
//	printList(lst2);
//
//	list<int> lst3;
//	lst3.assign(5, 50);
//	printList(lst3);
//
//	list<int> lst4;
//	lst4 = lst3;
//	printList(lst4);
//
//	lst1.swap(lst4);
//	printList(lst1);
//	printList(lst4);
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