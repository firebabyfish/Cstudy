//#include <iostream>
//using namespace std;
//#include <deque>
//
///*
//两端插入操作：
//push back(elem);		//在容器尾部添加一个数据
//push front(elem);		//在容器头部插入一个数据
//pop_back();				//删除容器最后一个数据
//pop_front();			//删除容器第一个数据
//
//指定位置操作：
//insert(pos,elem);		//在pos位置插入一个elem元素的拷贝，返回新数据的位置
//insert(pos,n,elem);		//在pos位置插入n个elem数据，无返回值
//insert(pos,beg,end);	//在pos位置插入[beg,end)区间的数据，无返回值
//clear();				//清空容器的所有数据
//erase(beg,end);			//删除[beg,end)区间的数据，返回下一个数据的位置
//erase(pos);				//删除pos位置的数据，返回下一个数据的位置
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
//	//d1.push_back(100); //尾插
//	//d1.push_front(88); //头插
//	//printDeq(d1);
//
//	//d1.pop_back(); //尾删
//	//d1.pop_front(); //头删
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
//	//d2.erase(d2.begin(), d2.end()); //该操作等同于clear
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