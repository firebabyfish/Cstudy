//#include <iostream>
//using namespace std;
//#include <deque>
//
///*
//- deque& operator=(const deque& vec); //重载等号操作符
//- assign(beg, end);                     //将[beg, end]区间中的数据拷贝赋值给本身
//- assign(n, elem);                      //将n个elem值拷贝赋值给本身
//*/
//
//void printVec(deque<int>& v)
//{
//	for (deque<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVec(v1);
//
//	deque<int>v2;
//	v2.assign(v1.begin(), v1.end());
//	printVec(v2);
//
//	v1.assign(10, 9);
//	printVec(v1);
//
//	v2 = v1;
//	printVec(v2);
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