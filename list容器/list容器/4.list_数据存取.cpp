//#include <iostream>
//using namespace std;
//#include <list>
//
///*
//- front(); //���ص�һ��Ԫ��
//- back();  //�������һ��Ԫ��
//*/
//
//void test01()
//{
//	list<int> lst1;
//	lst1.push_back(10);
//	lst1.push_back(20);
//	lst1.push_back(30);
//	lst1.push_back(40);
//	lst1.push_back(50);
//
//	//������lst1[]�ķ�ʽ��������
//	//ԭ����list���������������������Կռ�洢���ݣ�������Ҳ��֧���������
//
//	cout << "The first data is " << lst1.front() << endl;
//	cout << "The last data is " << lst1.back() << endl;
//
//	list<int>::iterator it = lst1.begin();
//	it++; //֧��˫�� ��++/-- ��ֻ֧��һ��Ϊ���� 
//	it--;
//	//it = it + 1; //���������������ʽ�Ӽ�����Ϊ��֧���������
//	cout << *it << endl;
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