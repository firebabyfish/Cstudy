//#include <iostream>
//using namespace std;
//#include <map>
//
///*
//- map<T1, T2> mp;	  //mapĬ�Ϲ��캯��
//- map(const map& mp); //�������캯��
//- map& operator(const map& mp); //���صȺŲ�����
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
//	map<int, int> mp;
//	mp.insert(pair<int, int>(1, 10)); //ÿ��Ԫ�ض��Ƕ���
//	mp.insert(pair<int, int>(2, 20));
//	mp.insert(pair<int, int>(3, 30));
//	mp.insert(pair<int, int>(4, 40));
//
//	printMap(mp);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}