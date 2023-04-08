//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	//重写  函数返回类型 函数名 参数列表 需要完全相同
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////地址早绑定  在编译阶段确定函数地址
////如果想让猫说话，那么函数地址不能提前绑定，需要在运行阶段进行绑定，即地址晚绑定
//// 
////动态多态满足条件
////1、有继承关系
////2、子类重写父类虚函数
//
//void doSpeak(Animal &animal) //Animal &animal = cat;  父子的类型可以互相变换
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}