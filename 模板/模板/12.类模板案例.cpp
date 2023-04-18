#include "MyArray.hpp"

//打印数组函数
void printArray(MyArray<int>& arr)
{
	cout << "该数组的数据分别为：";
		for (int i = 0; i < arr.getSize(); i++)
		{
			cout << arr[i] << " ";
		}
	cout << endl;
}

void test01()
{
	MyArray<int>arr1(5);
	MyArray<int>arr2(arr1);
	MyArray<int>arr3(100);

	arr3 = arr1;

}

void test02()
{
	MyArray<int>arr1(5);
	MyArray<int>arr2(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.inTail(i + 1);
		arr2.inTail(i);
	}

	printArray(arr1);
	printArray(arr2);

	arr2.delTail();
	printArray(arr2);

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}

//P184  未完需补充