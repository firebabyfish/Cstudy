//#include <iostream>
//using namespace std;
//
////ʵ��ͨ�ã��������������ĺ���ģ��
////����Ӵ�С
////����char���飬int����
//
////��������ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////������ģ��
//template<class T>
//void mySort(T arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = i + 1; j < num; j++)
//		{
//			if (arr[j] > arr[i])
//			{
//				mySwap(arr[i], arr[j]);
//			}
//		}
//	}
//}
//
////��ӡ����ģ��
//template<class T>
//void myPrint(T arr[], int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
////����char����
//void test01()
//{
//	char ch[] = "abcdefg";
//	int len = sizeof(ch) / sizeof(char);
//	mySort(ch, len);
//	myPrint(ch, len);
//}
//
////����int����
//void test02()
//{
//	int arr[] = { 5,6,3,4,2,7,1 };
//	int len = sizeof(arr) / sizeof(int);
//	mySort(arr, len);
//	myPrint(arr, len);
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}