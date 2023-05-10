//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- front(); //返回第一个元素
//- back();  //返回最后一个元素
//*/
//
//void test01()
//{
//	list<int> lst1;
//	lst1.push_back(10);
//	lst1.push_back(20);
//	lst1.push_back(30);
//	lst1.push_back(40);
//	lst1.push_back(50);
//
//	//不可用lst1[]的方式访问数据
//	//原因是list本质是链表，不是用连续性空间存储数据，迭代器也不支持随机访问
//
//	cout << "The first data is " << lst1.front() << endl;
//	cout << "The last data is " << lst1.back() << endl;
//
//	list<int>::iterator it = lst1.begin();
//	it++; //支持双向 可++/-- 若只支持一种为单向 
//	it--;
//	//it = it + 1; //如果不能以这种形式加减，则为不支持随机访问
//	cout << *it << endl;
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