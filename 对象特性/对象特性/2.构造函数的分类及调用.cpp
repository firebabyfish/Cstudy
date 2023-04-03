//#include <iostream>
//using namespace std;
//#include <string>
//
////1、构造函数的分类及调用
////分类
////1、参数类型分类  2、有参与无参(默认构造)分类
//class Person
//{
//public:
//	
//	int age;
//
//	//构造函数
//	Person()
//	{
//		cout << "无参构造函数" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造函数" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout << "析构函数" << endl;
//	}
//};
//
////调用
//void test01()
//{
//	//1、括号法
//	//Person p1; //默认构造函数调用
//	//Person p2(10); //有参构造函数
//	//Person p3(p2); //拷贝构造函数
//	
//	//注意事项1
//	//调用默认构造函数的时候，不要加()
//
//	//2、显示法
//	Person p1; //默认构造
//	Person p2 = Person(10); //有参构造
//	Person p3 = Person(p2); //拷贝构造
//
//	//Person(10); //匿名对象  特点：当前行执行结束立即注销
//	//cout << "flag" << endl;
//
//	//注意事项2
//	//不要利用 拷贝函数 初始化匿名对象
//	//Person(p3); //编译器会认为 Person（p3）== Person p3；
//
//	//3、隐式转换法
//	Person p4 = 10; //相当于写了  Person p4 = Person(10);
//	Person p5 = p4; //拷贝构造
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}