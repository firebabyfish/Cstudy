//#include <iostream>
//using namespace std;
//
////��ģ���Ա��������ʱ��
////��ģ���г�Ա�����ڵ���ʱ��ȡ����
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "show Person 1" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "show Person 2" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//
//	T obj;
//
//	//��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//
//};
//
//void test01()
//{
//	//����ȷ�����ܵ��ú���(ע��ʱ��)
//	MyClass<Person1>mc1;
//	mc1.func1();
//	//mc1.func2();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}