//#include <iostream>
//using namespace std;
//#include <map>
//
///*
//insert(elem);		//在容器中插入元素
//clear();			//清除所有元素
//erase(pos);			//删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg, end);	//删除区间[beg,end)的所有元素，返回下一个元素的选代器
//erase(key);			//删除容器中值为key的元素
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
//
//	//插入
//	mp1.insert(pair<int, int>(1, 10));  //第一种
//	mp1.insert(make_pair(2,20));		      //第二种
//	mp1.insert(map<int, int>::value_type(3, 30));	//第三种
//	mp1[4] = 40; //第四种（不建议插入使用） 但方便用key访问value
//
//	printMap(mp1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}