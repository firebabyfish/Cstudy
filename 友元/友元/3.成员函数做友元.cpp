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

	int m_Id; //���ƺ�

private:

	int m_Pwd; //������

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
	cout << "idΪ" << building->m_Id << endl;
	cout << "����Ϊ" << building->m_Pwd << endl;
}

void GoodFriend::badVisit()
{
	cout << "bad" << endl;
	cout << "idΪ" << building->m_Id << endl;
	//cout << "����Ϊ" << building->m_Pwd << endl;
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