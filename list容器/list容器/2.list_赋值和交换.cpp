//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- assign(begin, end);				//将[begin, end)区间中的数据拷贝赋值给本身
//- assign(n, elem);					//将n个elem赋值给本身
//- list& operator=(const list& lst);	//重载=操作符
//- swap(lst);						//将lst与本身的元素互换
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