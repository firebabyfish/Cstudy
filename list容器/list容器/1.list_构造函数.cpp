//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- list<T> lst;			 //list采用模板类实现对象的默认构造形式
//- list(begin, end);		 //构造函数将[begin, end)区间中的元素拷贝给本身
//- list(n, elem);		 //构造函数将n个elem拷贝给本身
//- list(const list& lst); //拷贝构造函数
//*/
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << (*it) << " ";
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
//	list<int> lst2(lst1);
//	printList(lst2);
//
//	list<int> lst3(5, 50);
//	printList(lst3);
//
//	list<int> lst4(lst3.begin(), lst3.end());
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