//#include <iostream>
//using namespace std;
//
//
//////普通方式
////class Java
////{
////public:
////	void header()
////	{
////		cout << "公共头部" << endl;
////	}
////	void footer()
////	{
////		cout << "公共底部" << endl;
////	}
////	void left()
////	{
////		cout << "公共分类列表" << endl;
////	}
////	void  content()
////	{
////		cout << "Java " << endl;
////	}
////};
//////复制粘贴内容
////class Python
////{
////public:
////	void header()
////	{
////		cout << "公共头部" << endl;
////	}
////	void footer()
////	{
////		cout << "公共底部" << endl;
////	}
////	void left()
////	{
////		cout << "公共分类列表" << endl;
////	}
////	void  content()
////	{
////		cout << "Python " << endl;
////	}
////};
//
////继承方式
////继承的好处：减少代码
//// 语法：class 子类 : 继承方式 父类
////子类也称为派生类
////父类也称为基类
//class Base
//{
//public:
//	void header()
//	{
//		cout << "公共头部" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类列表" << endl;
//	}
//};
//
//class Java : public Base
//{
//public:
//	void content()
//	{
//		cout << "Java " << endl;
//	}
//};
//
//class Python : public Base
//{
//public:
//	void content()
//	{
//		cout << "Python " << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java页面内容如下：" << endl;
//	Java j;
//	j.header();
//	j.footer();
//	j.left();
//	j.content();
//	cout << "-------------------" << endl;
//	cout << "Python页面内容如下：" << endl;
//	Python p;
//	p.header();
//	p.footer();
//	p.left();
//	p.content();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}