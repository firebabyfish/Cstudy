//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	//��д  ������������ ������ �����б� ��Ҫ��ȫ��ͬ
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////��ַ���  �ڱ���׶�ȷ��������ַ
////�������è˵������ô������ַ������ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ���
//// 
////��̬��̬��������
////1���м̳й�ϵ
////2��������д�����麯��
//
//void doSpeak(Animal &animal) //Animal &animal = cat;  ���ӵ����Ϳ��Ի���任
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