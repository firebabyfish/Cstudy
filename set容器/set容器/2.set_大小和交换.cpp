//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- size();	//����������Ԫ�ص���Ŀ
//- empty();	//�ж������Ƿ�Ϊ��
//- swap(st);	//����������������
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
//void test()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	if (s1.empty())
//		cout << "s1Ϊ��" << endl;
//	else
//		printSet(s1);
//
//	set<int> s2;
//	set<int> s3;
//	s2.insert(50);
//	s2.insert(40);
//	printSet(s2);
//	printSet(s3);
//
//	s2.swap(s3);
//	s1.swap(s2);
//	cout << "������" << endl;
//	if (s1.empty())
//		cout << "s1Ϊ��" << endl;
//	else
//		printSet(s1);
//	printSet(s2);
//	printSet(s3);
//
//}
//
//int main()
//{
//	test();
//
//	system("pause");
//	return 0;
//}