//#include <iostream>
//using namespace std;
//#include <map>
//
///*
//- size();	//����������Ԫ�ص���Ŀ
//- empty();	//�ж������Ƿ�Ϊ��
//- swap(st);	//����������������
//*/
//
//void printMap(map<int, int>& mp)
//{
//	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> mp1;
//	mp1.insert(pair<int, int>(1, 10)); //ÿ��Ԫ�ض��Ƕ���
//	mp1.insert(pair<int, int>(2, 20));
//	mp1.insert(pair<int, int>(3, 30));
//	mp1.insert(pair<int, int>(4, 40));
//	printMap(mp1);
//	if (mp1.empty())
//		cout << "����Ϊ��" << endl;
//	else
//		cout << "size = " << mp1.size() << endl;
//
//	map<int, int> mp2;
//	mp2.insert(pair<int, int>(1, 10));
//	mp2.insert(pair<int, int>(2, 10));
//	mp2.insert(pair<int, int>(3, 10));
//	mp2.insert(pair<int, int>(4, 10));
//	printMap(mp2);
//	mp2.swap(mp1);
//	printMap(mp2);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}