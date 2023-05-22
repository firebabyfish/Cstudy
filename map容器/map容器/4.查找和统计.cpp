//#include <iostream>
//using namespace std;
//#include <map>
//
///*
//- find(key);	//查找key是否存在，存在返回该key的元素的迭代器；不存在返回set.end();
//- count(key);	//统计key的元素个数
//*/
//
//void printMap(map<int, int>& mp)
//{
//	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> mp1;
//	mp1.insert(make_pair(1, 10));
//	mp1.insert(make_pair(2, 20));
//	mp1.insert(make_pair(3, 30));
//
//	map<int, int>::iterator it = mp1.find(3);
//	cout << it->second << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}