//#include <iostream>
//using namespace std;
//
//class Building
//{
//	friend void gooFriend(Building* building);
//
//public:
//
//	Building()
//	{
//		m_Livingroom = "����";
//		m_Bedroom = "����";
//	}
//
//public:
//
//	string m_Livingroom;
//
//private:
//
//	string m_Bedroom;
//
//};
//
//void gooFriend(Building* building)
//{
//	cout << "��������" << building->m_Livingroom << endl;
//
//	cout << "��������" << building->m_Bedroom << endl; //�������� friend ����
//}
//
//void test01()
//{
//	Building b1;
//	gooFriend(&b1);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}