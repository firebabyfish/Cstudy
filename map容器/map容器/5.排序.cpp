#include <iostream>
using namespace std;
#include <map>

class MyCompare
{
public:

	bool operator()(int v1, int v2) const //��Ҫconst
	{
		return v1 > v2;
	}

};

void test01()
{
	map<int, int, MyCompare> mp; //�ƶ��������
	mp.insert(make_pair(1, 10));
	mp.insert(make_pair(2, 20));
	mp.insert(make_pair(3, 30));

	for (map<int, int, MyCompare>::iterator it = mp.begin(); it != mp.end(); it++) //�ƶ��������
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