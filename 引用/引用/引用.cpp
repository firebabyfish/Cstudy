//#include <iostream>
//using namespace std;
//#include <string>
//
//void yinyongjichu()
//{
//	int a = 10;
//
//	//���õı����൱�ڸ����������
//	//���û����﷨
//	int& b = a; //��������
//	b = 20;
//
//	//int &c; //���󣬴������ñ����ʼ��
//	int& c = a; //һ����ʼ�����޷�����
//	c = b; //���Ǹ�ֵ�����Ǹ�������
//	
//
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//}
//
////ʹ�����ý������ֽ���
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//////��������������
////int main()
////{
////	int a = 10;
////	int b = 20;
////
////	cout << a << endl;
////	cout << b << endl;
////
////	swap(a, b);
////
////	cout << a << endl;
////	cout << b << endl;
////
////	system("pause");
////	return 0;
////}
//
//int& test01()
//{
//	int a = 10; //�����ջ��
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
////int main()
////{
////	//�����������ķ���ֵ
////	//1����Ҫ���ؾֲ�����������
////	/*int& ref = test01();
////
////	cout << ref << endl;
////	cout << ref << endl;*/
////
////	//2�����������ÿ�����Ϊ��ֵ
////	int& ref = test02();
////
////	cout << ref << endl;
////	cout << ref << endl;
////
////	test02() = 1000;
////
////	cout << ref << endl;
////	cout << ref << endl;
////
////	system("pause");
////	return 0;
////}
//
//////���õı�����c++�ڲ���һ��ָ�볣��
////void func(int& ref)
////{
////	ref = 100;
////}
////int main()
////{
////	int a = 10;
////
////	int& ref = a; //�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿��Ըģ�Ҳ����Ϊ�����ò��ɸ���
////	ref = 20; //ת��Ϊ *ref = 20;
////
////	cout << a << endl;
////	cout << ref << endl;
////
////	func(a);
////
////	cout << a << endl;
////
////	system("pause");
////	return 0;
////}
//
////��������
////ʹ�ó��������������βΣ���ֹ�����
//int main()
//{
//	//����const֮�󣬱������������޸� int temp = 10; const int & ref = temp;
//	//int a = 10;
//	//const int& ref = 10; //���ñ�����һ��Ϸ����ڴ�ռ�
//	//ref = 20; //����const֮���Ϊֻ�����������޸�
//
//	system("pause");
//	return 0;
//}