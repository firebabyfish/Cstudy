//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son : public Base // ���󣬱���Ҫ֪�������е�T���Ͳ��ܼ̳и����� 
//class Son1 : public Base<int> // ����һ����������
//{
//
//};
//
////ֱ��ʹ����ģ�����ֱ�Ӽ̳и���ģ��
//template<class T1, class T2>
//class Son2 : public Base<T2>
//{
//	T1 obj;
//};
//
//void test01()
//{
//	Son1 s1;
//	Son2<int, char>s2;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}