#include <iostream>
using namespace std;

//创建全局变量
int ga = 10;
int gb = 10;

//const修饰的全局变量
const int cga = 10;
const int cgb = 20;

int main()
{
	//创建局部变量
	int a = 10;
	int b = 20;

	//创建静态变量
	static int sa = 10;
	static int sb = 20;

	//const修饰的局部变量
	const int ca = 10;
	const int cb = 20;

	//打印地址发现这两个变量离得很近，都不存放在全局区
	cout << (int)&a << endl;
	cout << (int)&b << endl;

	//全局变量离局部变量很远
	cout << (int)&ga << endl;
	cout << (int)&gb << endl;

	//可以发现静态变量与全局变量很相近，都存放在全局区
	cout << (int)&sa << endl;
	cout << (int)&sb << endl;

	//const修饰的全局变量在全局区，局部变量不在
	cout << (int)&cga << endl;
	cout << (int)&cgb << endl;
	cout << (int)&ca << endl;
	cout << (int)&cb << endl;

	return 0;
}