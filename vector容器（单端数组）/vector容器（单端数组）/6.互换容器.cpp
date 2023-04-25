//#include <iostream>
//using namespace std;
//#include <vector>
//
///*
//- swap(vec);			//将vec与本身的元素互换
//*/
//
//void printVec(vector<int>& v)
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
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>v2;
//	for (int i = 9; i > -1; i--)
//	{
//		v2.push_back(i);
//	}
//
//	printVec(v1);
//	printVec(v2);
//
//	/*vector<int>tmp;
//	tmp.swap(v2);*/
//	v2.swap(v1);
//	/*v1.swap(tmp);*/
//
//	printVec(v1);
//	printVec(v2);
//
//}
//
////2实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "容器的容量为：" << v.capacity() << endl;
//	cout << "容器的大小为：" << v.size() << endl;
//
//	//重新指定大小
//	v.resize(3);
//	cout << "容器的容量为：" << v.capacity() << endl;
//	cout << "容器的大小为：" << v.size() << endl;
//
//	//巧用vector收缩内存
//	vector<int>(v).swap(v);		//vector<int>(v)  利用拷贝函数生成的匿名对象
//	cout << "容器的容量为：" << v.capacity() << endl;
//	cout << "容器的大小为：" << v.size() << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}