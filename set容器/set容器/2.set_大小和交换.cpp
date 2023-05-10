//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- size();	//返回容器中元素的数目
//- empty();	//判断容器是否为空
//- swap(st);	//交换两个集合容器
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
//void test()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	if (s1.empty())
//		cout << "s1为空" << endl;
//	else
//		printSet(s1);
//
//	set<int> s2;
//	set<int> s3;
//	s2.insert(50);
//	s2.insert(40);
//	printSet(s2);
//	printSet(s3);
//
//	s2.swap(s3);
//	s1.swap(s2);
//	cout << "交换后：" << endl;
//	if (s1.empty())
//		cout << "s1为空" << endl;
//	else
//		printSet(s1);
//	printSet(s2);
//	printSet(s3);
//
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}