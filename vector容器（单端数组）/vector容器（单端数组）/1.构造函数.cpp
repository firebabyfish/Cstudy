//#include <iostream>
//using namespace std;
//#include <vector>
//
///*
//vector<T> v;]               //采用模板实现类实现，默认构造函数
//vector(v.begin()，v.end()); //将v(begin(),end())区间中的元素拷贝给本身
//vector(n, elem);            //构造函数将n个elem拷贝给本身
//vector(const vector &vec);  //拷贝构造函数。
//*/
//
//void printVec(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1; //默认构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVec(v1);
//
//	//通过区间构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVec(v2);
//
//	vector<int>v3(10, 9);
//	printVec(v3);
//
//	vector<int>v4(v3);
//	printVec(v4);
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