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
//		cout << "Animal���캯��" << endl;
//	}
//
//	virtual void speak() = 0;
//
//	//������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������" << endl;
//	//}
//
//	//��������
//	virtual ~Animal() = 0; //��Ҫ�к���������ʵ��
//
//};
//
//Animal::~Animal() 
//{
//	cout << "Animal��������" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat���캯��" << endl;
//		m_Name = new string(name);
//	}
//
//	void speak()
//	{
//		cout << *m_Name << "��è����" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat��������" << endl;
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
//	//����ָ��������������ʱ�򣬲�������������������������������ж��������޷��ͷţ������ڴ�й©
//	//�������������
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