#include <iostream>
using namespace std;

class Building;

class GoodFriend
{
public:

	GoodFriend();

	void goodVisit();
	void badVisit();

public:

	Building* building;

};

class Building
{
	friend void GoodFriend::goodVisit();

public:

	Building();

public:

	int m_Id; //门牌号

private:

	int m_Pwd; //门密码

};

Building::Building()
{
	m_Id = 12;
	m_Pwd = 1234;
}

GoodFriend::GoodFriend()
{
	building = new Building;
}

void GoodFriend::goodVisit()
{
	cout << "good" << endl;
	cout << "id为" << building->m_Id << endl;
	cout << "密码为" << building->m_Pwd << endl;
}

void GoodFriend::badVisit()
{
	cout << "bad" << endl;
	cout << "id为" << building->m_Id << endl;
	//cout << "密码为" << building->m_Pwd << endl;
}

void test01()
{
	GoodFriend f1;
	f1.goodVisit();
	f1.badVisit();
}

int main()
{
	test01();

	system("pause");
	return 0;
}