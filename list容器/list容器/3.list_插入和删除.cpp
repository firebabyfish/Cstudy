//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- push_back(elem);		//在容器尾部加入一个元素
//- pop_back();			//删除容器中最后一个元素
//- push_front(elem);		//在容器开头插入一个元素
//- pop_front():			//从容器开头移除第一个元素
//- insert(pos,elem);		//在pos位置插入elem元素的拷贝，返回新数据的位置
//- insert(pos,n,elem);	//在pos位置插入n个elem数据，无返回值
//- insert(pos,beg,end);	//在pos位置插入[beg, end)区间的数据，无返回值。
//- clear();				//移除容器的所有数据
//- erase(beg,end);		//删除[beg, end)区间的数据，返回下一个数据的位置
//- erase(pos);			//删除pos位置的数据，返回下一个数据的位置
//- remove(elem):			//删除容器中所有与elem值匹配的元素
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
//	list<int>::iterator it = lst1.begin();
//
//	//尾插
//	lst1.push_back(10);
//	lst1.push_back(20);
//	lst1.push_back(30); //10 20 30
//
//	//头插 
//	lst1.push_front(100);
//	lst1.push_front(200);
//	lst1.push_front(300); //300 200 100 10 20 30
//	printList(lst1);
//
//	lst1.pop_back(); //300 200 100 10 20
//	lst1.pop_front(); //200 100 10 20
//	printList(lst1);
//
//	lst1.insert(lst1.begin(), 1000); //1000 200 100 10 20
//	lst1.insert(lst1.end(), 3, 2000); //1000 200 100 10 20 2000 2000 2000
// 	printList(lst1);
//
//	//删除
//	it = lst1.begin();
//	lst1.erase(it); //200 100 10 20 2000 2000 2000
//	it = lst1.begin();
//	lst1.erase(++it); //200 10 20 2000 2000 2000
//	printList(lst1);
//
//	lst1.remove(2000); //200 10 20
//	printList(lst1);
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