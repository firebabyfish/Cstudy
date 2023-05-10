//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- find(key);  //查找key是否存在，返回该键的元素的迭代器；若不存在，返回set.end()
//- count(key); //统计key的个数
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
//	s1.insert(40);
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20); 
//
//	set<int>::iterator it = s1.find(100);
//	if (it != s1.end())
//		cout << "已找到该元素：" << *it << endl;
//	else
//		cout << "未找到该元素" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}