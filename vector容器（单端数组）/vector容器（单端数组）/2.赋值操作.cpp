//#include <iostream>
//using namespace std;
//#include <vector>
//
///*
//- vector& operator=(const vector& vec); //���صȺŲ�����
//- assign(beg, end);                     //��[beg, end]�����е����ݿ�����ֵ������
//- assign(n, elem);                      //��n��elemֵ������ֵ������
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
//	printVec(v1);
//
//	vector<int>v2;
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