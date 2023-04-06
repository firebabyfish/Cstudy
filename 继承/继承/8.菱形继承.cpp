#include <iostream>
using namespace std;

class Animal
{
public:

	int m_Age;

};

//利用虚继承 解决菱形继承的问题
//继承之前加上关键字 virtual 变为虚继承
//Animal类称为虚基类
class Sheep : virtual public Animal
{

};

class Camel : virtual public Animal
{

};

class Alpaca : public Sheep, public Camel
{

};

void test01()
{
	Alpaca yt;

	yt.Sheep::m_Age = 10;
	yt.Camel::m_Age = 100;

	//当菱形继承时，两个父类拥有相同数据，要用作用域加以区分
	cout << "sheep_age = " << yt.Sheep::m_Age << endl;
	cout << "camel_age = " << yt.Camel::m_Age << endl;

	//这份数据我们知道，只要有一份就可以，菱形数据导致数据重复，资源浪费
	cout << "yt_age = " << yt.m_Age << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}