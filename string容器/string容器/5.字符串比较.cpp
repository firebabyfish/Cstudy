//#include <iostream>
//using namespace std;
//
///*
//- int compare(const string& s) const; //与字符串s比较
//- int compare(const char* s) const;   //与字符串s比较
//*/
//
//void test01()
//{
//	string str1 = "abcde";
//	string str2 = "lmn";
//	string str3 = "abcde";
//
//	//int ret = str1.compare(str2);   //不同：大于返回1  小于返回-1
//	int ret = str1.compare(str3);   //相同：返回0
//
//	if (!ret)
//	{
//		cout << "字符串相同" << endl;
//	}
//	else
//	{
//		cout << "字符串不同" << endl;
//	}
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