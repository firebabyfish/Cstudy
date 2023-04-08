//#include <iostream>
//using namespace std;
//#include <string>
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	//虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal析构函数" << endl;
//	//}
//
//	//纯虚析构
//	virtual ~Animal() = 0; //需要有函数主体来实现
//
//};
//
//Animal::~Animal() 
//{
//	cout << "Animal纯虚析构" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat构造函数" << endl;
//		m_Name = new string(name);
//	}
//
//	void speak()
//	{
//		cout << *m_Name << "的猫叫声" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//
//};
//
//void test01()
//{
//	Animal* cat = new Cat("Tom");
//	cat->speak();
//	//父类指针在析构函数的时候，不会调用子类析构函数，导致子类中有堆区数据无法释放，出现内存泄漏
//	//利用虚析构解决
//	delete cat;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}