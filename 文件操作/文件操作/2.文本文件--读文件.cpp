//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建流对象
//	ifstream ifs;
//
//	//3、打开文件，并且判断是否打开成功
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4、读数据 有四种方法
//	//1）
//	char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//
//	//2）
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//3)
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//4)
//	//char ch;
//	//while ((ch = ifs.get()) != EOF)
//	//{
//	//	cout << ch;
//	//}
//
//	//5、关闭文件
//	ifs.close();
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