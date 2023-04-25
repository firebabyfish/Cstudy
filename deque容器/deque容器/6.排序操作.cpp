#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

/*
- sort(iterator beg, iterator end);  //��beg��end�����ڵ�Ԫ�ؽ�������
*/

void printDeq(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(60);
	d1.push_back(120);
	d1.push_back(70);
	d1.push_back(50);
	printDeq(d1);

	sort(d1.begin(), d1.end()); //Ĭ�ϴ�С����
	printDeq(d1);

}

int main()
{
	test01();

	system("pause");
	return 0;
}