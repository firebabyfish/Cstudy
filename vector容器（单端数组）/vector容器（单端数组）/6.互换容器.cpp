//#include <iostream>
//using namespace std;
//#include <vector>
//
///*
//- swap(vec);			//��vec�뱾���Ԫ�ػ���
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
////2ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "����������Ϊ��" << v.capacity() << endl;
//	cout << "�����Ĵ�СΪ��" << v.size() << endl;
//
//	//����ָ����С
//	v.resize(3);
//	cout << "����������Ϊ��" << v.capacity() << endl;
//	cout << "�����Ĵ�СΪ��" << v.size() << endl;
//
//	//����vector�����ڴ�
//	vector<int>(v).swap(v);		//vector<int>(v)  ���ÿ����������ɵ���������
//	cout << "����������Ϊ��" << v.capacity() << endl;
//	cout << "�����Ĵ�СΪ��" << v.size() << endl;
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