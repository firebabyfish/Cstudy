//#include <iostream>
//using namespace std;
//#include <map>
//
///*
//insert(elem);		//�������в���Ԫ��
//clear();			//�������Ԫ��
//erase(pos);			//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg, end);	//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�ص�ѡ����
//erase(key);			//ɾ��������ֵΪkey��Ԫ��
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
//
//	//����
//	mp1.insert(pair<int, int>(1, 10));  //��һ��
//	mp1.insert(make_pair(2,20));		      //�ڶ���
//	mp1.insert(map<int, int>::value_type(3, 30));	//������
//	mp1[4] = 40; //�����֣����������ʹ�ã� ��������key����value
//
//	printMap(mp1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}