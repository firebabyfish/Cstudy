//#include <iostream>
//using namespace std;
//#include <set>
//
///*
//- set�������ظ��������ݣ���multiset����
//- set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//- multiset���������ݣ����Կ��Բ����ظ�����
//*/
//
//void test01()
//{
//	set<int> s1;
//	pair<set<int>::iterator, bool> ret1 = s1.insert(10);
//	if (ret1.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//	ret1 = s1.insert(10);
//	if (ret1.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//
//	multiset<int> s2;
//	s2.insert(10);
//	s2.insert(10);
//	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
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