#include <iostream>
using namespace std;
#include <vector>

/*
- reserve(int len);			//容器预留len个元素元素长度，预留位置不初始化，元素不可访问
*/

void test01()
{
	int num = 0; //统计扩容次数
	int* p = NULL;
	vector<int>v1;
	v1.reserve(100000); //通过预留空间减少扩容的次数
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}

	cout << "总共扩容了" << num << "次" << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}