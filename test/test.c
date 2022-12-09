#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//数据类型
//int main()
//{
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
// 
//  return 0;
//}

//int main()
//{
//	//字符类型
//	char word = 'a';
//
//	//整形
//	int x1 = 1;
//	//短整型
//	short x2 = 2;
//	//长整型
//	long x3 = 3;
//
//	//浮点型
//	float y1 = 1.1;
//	//双浮点型
//	double y2 = 2.2;
//
//	return 0;
//}

//常量变量
int a = 100;//全局变量
extern int add;//声明add.c中的变量
#define MIN 500;
int main()
{
	//局部变量
	int b = 200;//只在括号里面可用
	b = b + 1;//变量可以改变
	printf("%d\n%d\n%d\n",a,b,add);


	//常量
	3.14;
	'a';
	"weight";
	
	//常变量
	const int a;//const修饰的常变量不可改变

	//define定义的标识符常量
	int n = MIN;
	printf("%d\n",n);

	//枚举常量
	enum Sex
	{
		MALE, FEMALE
	};
	enum Sex s = MALE;

	return 0;
}
