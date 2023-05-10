//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- set<T> st;		  //默认构造函数
//- set(const set& st); //拷贝构造函数
//- set& operator=(const set& st); //重载等号操作符
//*/
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int> s1;
//
//	//插入数据只有insert方式
//	s1.insert(40);
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20); 
//
//	//遍历容器
//	//容器特点
//	//1.set容器能够自动排序
//	//2.set容器不允许插入重复值
//	printSet(s1); //10 20 30 40 50
//
//	set<int> s2(s1); //拷贝构造
//	printSet(s2);
//
//	set<int> s3 = s2; // = 重载
//	printSet(s3);
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