//#include <iostream>
//using namespace std;
//#include <vector>
//
///*
//- push back(ele);                                  //β������Ԫ��ele
//- pop_back();                                      //ɾ�����һ��Ԫ��
//- insert(const_iterator pos, ele);                 //ѡ����ָ��λ��pos����Ԫ��ele
//- insert(const_iterator pos, int count, ele);      //ѡ����ָ��λ��pos����count��Ԫ��ele
//- erase(const_iterator pos);                       //ɾ��������ָ���Ԫ��
//- erase(const_iterator start, const_iterator end); //ɾ��ѡ������start��end֮���Ԫ��
//- clear();                                         //ɾ������������Ԫ��
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
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVec(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVec(v1);
//	
//	//���� ��һ������Ϊ������
//	v1.insert(v1.begin(), 99);
//	printVec(v1);
//
//	//ɾ�� ����Ϊ������
//	v1.erase(v1.begin());
//	printVec(v1);
//
//	//���
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear(); //����Ч����ͬ
//	printVec(v1);
//
//	//�޷����ǣ�ֻ�ܿ����¿ռ�
//	v1.insert(v1.end(), 3, 88);
//	printVec(v1);
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