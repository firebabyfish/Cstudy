//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2������������
//	ifstream ifs;
//
//	//3�����ļ��������ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4�������� �����ַ���
//	//1��
//	char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//
//	//2��
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
//	//5���ر��ļ�
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