//#include <iostream>
//using namespace std;
//#include <deque>
//
///*
//- empty();                    //判断容器是否为空
//- size();                     //返回容器中元素的个数
//- resize(int num);            //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
//                              //如果容器变短，则末尾超出容器长度的元素被删除。
//- resize(int num, elem);      //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
//		                      //如果容器变短，则未尾超出容器长度的元素被删除
//deque容器没有容量的概念，因为他会不断提前预存空间
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
//	if (v1.empty()) //为真 容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "容器的大小为：" << v1.size() << endl;
//	}
//
//	v1.resize(5);  //如果长了默认用0填充
//	printVec(v1);
//	cout << "容器的大小为：" << v1.size() << endl;
//
//	v1.resize(10, 9);
//	printVec(v1);
//	cout << "容器的大小为：" << v1.size() << endl;
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