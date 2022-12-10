#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//判断是否为质数
int prime_judge(int n)
{
    int i = 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

//判断是否为闰年
int leap_judge(int n)
{
    return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
}

//有序数组的二分查找
int binary_search(int a[], int n, int s)
{
    int left = 0;
    int right = s;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] < n)
        {
            left = mid + 1;
        }
        else if (a[mid] > n)
        {
            right = mid - 1;
        }
        else 
        {
            return mid;
        }
    }
}

//调用加一
void Add(int *n)
{
    (*n)++;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int num = 0;
    int year = 0;
    int count = 0;
    int index = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (num = 100; num <= 200; num++)//列出100-200之间的质数
    {
        if (prime_judge(num) == 1)
        {
            printf("%d ", num);
            count++;
        }
    }
    printf("\ncount = %d\n", count);

    count = 0;
    for (year = 1000; year <= 2000; year++)//列出1000-2000之间的闰年
    {
        if (leap_judge(year) == 1)
        {
            printf("%d ", year);
            count++;
        }
    }
    printf("\ncount = %d\n", count);

    /****二分查找****/
    num = 1;
    index = binary_search(arr, num, sz);
    printf("num的下标为%d\n", index);

    /****调用一次函数num加一****/
    num = 0;
    Add(&num);//1
    printf("%d\n", num);
    Add(&num);//2
    printf("%d\n", num);
    Add(&num);//3
    printf("%d\n", num);

    system("pause");
    return 0;
}