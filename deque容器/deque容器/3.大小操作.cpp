//#include <iostream>
//using namespace std;
//#include <deque>
//
///*
//- empty();                    //�ж������Ƿ�Ϊ��
//- size();                     //����������Ԫ�صĸ���
//- resize(int num);            //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
//                              //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//- resize(int num, elem);      //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
//		                      //���������̣���δβ�����������ȵ�Ԫ�ر�ɾ��
//deque����û�������ĸ����Ϊ���᲻����ǰԤ��ռ�
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
//	if (v1.empty()) //Ϊ�� ����Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "�����Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	v1.resize(5);  //�������Ĭ����0���
//	printVec(v1);
//	cout << "�����Ĵ�СΪ��" << v1.size() << endl;
//
//	v1.resize(10, 9);
//	printVec(v1);
//	cout << "�����Ĵ�СΪ��" << v1.size() << endl;
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