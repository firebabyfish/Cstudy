//#include <iostream>
//using namespace std;
//#include <string>
//
//class GoodFriend;
//
//class Building
//{
//	//��ȫ�ֺ����÷����ƣ����֮�������Է���˽��Ȩ��
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
////����д��Ա����
//Building::Building()
//{
//	m_Livingroom = "����";
//	m_Bedroom = "����";
//}
//
//GoodFriend::GoodFriend()
//{
//	building = new Building; //�������������
//}
//
//void GoodFriend::visit()
//{
//	cout << "�û������������" << building->m_Livingroom << endl;
//
//	cout << "�û������������" << building->m_Bedroom << endl;
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