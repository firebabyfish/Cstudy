//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- insert(elem);			//�������в���Ԫ��
//- clear();				//�������Ԫ��
//- erase(pos);			//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//- erase(begin, end);	//ɾ������[begin, end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//- erase(elem);			//ɾ��������ֵΪelem��Ԫ��
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
//	printSet(s1); //10 20 30 40 50
//
//	set<int>::iterator it = s1.begin();
//	s1.erase(it);
//	printSet(s1); //20 30 40 50
//
//	it = s1.begin();
//	s1.erase(++it, s1.end()); //20
//	printSet(s1);
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50); //10 20 30 50
//	printSet(s1);
//	s1.erase(20);
//	printSet(s1); //10 30 50 
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