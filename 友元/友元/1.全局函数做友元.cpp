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
//		m_Livingroom = "客厅";
//		m_Bedroom = "卧室";
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
//	cout << "好朋友在" << building->m_Livingroom << endl;
//
//	cout << "好朋友在" << building->m_Bedroom << endl; //将函数用 friend 声明
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