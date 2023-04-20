#include <iostream>
using namespace std;

//- string substr(int pos = 0, int n = npos) const;

void test01()
{
	string str = "abcde";

	string sub = str.substr(1, 3);

	cout << str << endl << sub << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@qq.com";
	
	//截取邮箱用户名
	string name = email.substr(0, email.find("@"));

	cout << name << endl;

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}