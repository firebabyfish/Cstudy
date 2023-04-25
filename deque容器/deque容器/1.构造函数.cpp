//#include <iostream>
//using namespace std;
//#include <deque>
//
//void printDeq(const deque<int>& d) //const
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) //const_iterator
//	{
//		//*it = 100; //容器中的数据现在不可以修改
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
//	deque<int>d2(d1.begin(), d1.end());
//	printDeq(d2);
//
//	deque<int>d3(10, 9);
//	printDeq(d3);
//
//	deque<int>d4(d3);
//	printDeq(d4);
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