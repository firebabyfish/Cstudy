//#include <iostream>
//using namespace std;
//
////实现通用：对数组进行排序的函数模板
////规则从大到小
////测试char数组，int数组
//
////交换函数模板
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序函数模板
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
////打印数组模板
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
////测试char数组
//void test01()
//{
//	char ch[] = "abcdefg";
//	int len = sizeof(ch) / sizeof(char);
//	mySort(ch, len);
//	myPrint(ch, len);
//}
//
////测试int数组
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