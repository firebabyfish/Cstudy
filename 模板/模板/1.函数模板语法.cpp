//#include <iostream>
//using namespace std;
//
////�������ͽ�������
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////���������ͽ�������
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<typename T> //����һ��ģ�壬���߱�������������н����ŵ� T ��Ҫ����T ��һ��ͨ����������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	double c = 1.01;
//	double d = 12.34;
//	//swapInt(a, b);
//	//swapDouble(c, d);
//
//	//1���Զ�������
//	mySwap(a, b);
//	//2����ʾָ������
//	mySwap<double>(c, d);
//
//	cout << "a = " << a << endl << "b = " << b << endl;
//	cout << "c = " << c << endl << "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}