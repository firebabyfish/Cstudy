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
//	//1、包含头文件
//	
//	//2、创建流对象
//	ofstream ofs;
//
//	//3、文件打开方式
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	//4、写文件
//	Person p1 = { "张三", 18 };
//	ofs.write((const char*)&p1, sizeof(p1));
//
//	//5、文件关闭
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