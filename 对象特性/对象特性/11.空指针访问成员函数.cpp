//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	void showClassName()
//	{
//		cout << "This is Person Class." << endl;
//	}
//
//	void showPersonAge()
//	{
//		//增加了代码的健壮性，防止他人传入空指针
//		if (this == NULL)
//		{
//			return;
//		}
//
//		cout << m_Age << endl;
//	}
//
//	int m_Age;
//
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	//p->showClassName();
//	p->showPersonAge();  //无法运行的原因是因为传入的指针为空
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}