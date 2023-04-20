//#include <iostream>
//using namespace std;
//
///*
//- string& operator+= (const char* str);
//- string& operator+= (const char c);
//- string& operator+= (const string& str);
//- string& append(const char* s);
//- string& append(const char* s, int n);
//- string& append(const string& s);
//- string& append(const char* s, int pos, int n);
//*/
//
//void test01()
//{
//	string str1 = "Hello ";
//	str1 += "world";
//	cout << "str1 = " << str1 << endl;
//	
//	string str2 = str1;
//	str2 += ';';
//	cout << "str2 = " << str2 << endl;
//
//	string str3 = "Hey! ";
//	str3 += str2;
//	cout << "str3 = " << str3 << endl;
//
//	string str4 = "I";
//	str4.append(" Love you");
//	cout << "str4 = " << str4 << endl;
//
//	string str5 = "I";
//	str5.append(" Love you", 5);
//	cout << "str5 = " << str5 << endl;
//
//	string str6 = "Hey! ";
//	str6.append(str4);
//	cout << "str6 = " << str6 << endl;
//
//	string str7 = "Hey! ";
//	str7.append(str4, 2, 9);
//	cout << "str7 = " << str7 << endl;
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