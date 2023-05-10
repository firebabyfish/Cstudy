//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- set不可以重复插入数据，而multiset可以
//- set插入数据的同时会返回插入结果，表示插入是否成功
//- multiset不会检测数据，所以可以插入重复数据
//*/
//
//void test01()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret1 = s1.insert(10);
//	if (ret1.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
//	ret1 = s1.insert(10);
//	if (ret1.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
//
//	multiset<int> s2;
//	s2.insert(10);
//	s2.insert(10);
//	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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