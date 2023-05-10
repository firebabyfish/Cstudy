//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- reserve(); //反转链表
//- sort;		 //链表排序
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
//	//反转
//	lst.reverse(); //40 50 30 10 20
//	printList(lst);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//sort(lst.begin(), lst.end());
//	//不支持访问随机访问迭代器的容器，内部会提供成员算法
//
//	//默认排序(小 --> 大)
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