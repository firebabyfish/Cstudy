//#include <iostream>
//using namespace std;
//#include <string>
//
//class GoodFriend;
//
//class Building
//{
//	//与全局函数用法类似，添加之后该类可以访问私有权限
//	friend class GoodFriend;
//
//public:
//
//	Building();
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
//class GoodFriend
//{
//public:
//
//	GoodFriend();
//
//	void visit();
//
//	Building* building;
//
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_Livingroom = "客厅";
//	m_Bedroom = "卧室";
//}
//
//GoodFriend::GoodFriend()
//{
//	building = new Building; //创建建筑物对象
//}
//
//void GoodFriend::visit()
//{
//	cout << "好基友们正在造访" << building->m_Livingroom << endl;
//
//	cout << "好基友们正在造访" << building->m_Bedroom << endl;
//}
//
//void test01()
//{
//	GoodFriend f1;
//	f1.visit();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}