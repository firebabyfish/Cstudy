//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- push_back(elem);		//������β������һ��Ԫ��
//- pop_back();			//ɾ�����������һ��Ԫ��
//- push_front(elem);		//��������ͷ����һ��Ԫ��
//- pop_front():			//��������ͷ�Ƴ���һ��Ԫ��
//- insert(pos,elem);		//��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
//- insert(pos,n,elem);	//��posλ�ò���n��elem���ݣ��޷���ֵ
//- insert(pos,beg,end);	//��posλ�ò���[beg, end)��������ݣ��޷���ֵ��
//- clear();				//�Ƴ���������������
//- erase(beg,end);		//ɾ��[beg, end)��������ݣ�������һ�����ݵ�λ��
//- erase(pos);			//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//- remove(elem):			//ɾ��������������elemֵƥ���Ԫ��
//*/
//
//void printList(const list<int>& lst)
//{
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int> lst1;
//	list<int>::iterator it = lst1.begin();
//
//	//β��
//	lst1.push_back(10);
//	lst1.push_back(20);
//	lst1.push_back(30); //10 20 30
//
//	//ͷ�� 
//	lst1.push_front(100);
//	lst1.push_front(200);
//	lst1.push_front(300); //300 200 100 10 20 30
//	printList(lst1);
//
//	lst1.pop_back(); //300 200 100 10 20
//	lst1.pop_front(); //200 100 10 20
//	printList(lst1);
//
//	lst1.insert(lst1.begin(), 1000); //1000 200 100 10 20
//	lst1.insert(lst1.end(), 3, 2000); //1000 200 100 10 20 2000 2000 2000
// 	printList(lst1);
//
//	//ɾ��
//	it = lst1.begin();
//	lst1.erase(it); //200 100 10 20 2000 2000 2000
//	it = lst1.begin();
//	lst1.erase(++it); //200 10 20 2000 2000 2000
//	printList(lst1);
//
//	lst1.remove(2000); //200 10 20
//	printList(lst1);
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