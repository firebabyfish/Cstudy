#include <iostream>
using namespace std;
#include <map>

class MyCompare
{
public:

	bool operator()(int v1, int v2) const //需要const
	{
		return v1 > v2;
	}

};

void test01()
{
	map<int, int, MyCompare> mp; //制定排序规则
	mp.insert(make_pair(1, 10));
	mp.insert(make_pair(2, 20));
	mp.insert(make_pair(3, 30));

	for (map<int, int, MyCompare>::iterator it = mp.begin(); it != mp.end(); it++) //制定排序规则
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}