//#include <iostream>
//using namespace std;
//#include <fstream>
//
//class Person
//{
//public:
//
//	char m_Name[100];
//	int m_Age;
//
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//	
//	//2������������
//	ofstream ofs;
//
//	//3���ļ��򿪷�ʽ
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	//4��д�ļ�
//	Person p1 = { "����", 18 };
//	ofs.write((const char*)&p1, sizeof(p1));
//
//	//5���ļ��ر�
//	ofs.close();
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