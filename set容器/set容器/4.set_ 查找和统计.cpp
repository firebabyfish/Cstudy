//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- find(key);  //����key�Ƿ���ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
//- count(key); //ͳ��key�ĸ���
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
//void test01()
//{
//	set<int> s1;
//	s1.insert(40);
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20); 
//
//	set<int>::iterator it = s1.find(100);
//	if (it != s1.end())
//		cout << "���ҵ���Ԫ�أ�" << *it << endl;
//	else
//		cout << "δ�ҵ���Ԫ��" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}