#include <iostream>
using namespace std;

//- string substr(int pos = 0, int n = npos) const;

void test01()
{
	string str = "abcde";

	string sub = str.substr(1, 3);

	cout << str << endl << sub << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@qq.com";
	
	//��ȡ�����û���
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