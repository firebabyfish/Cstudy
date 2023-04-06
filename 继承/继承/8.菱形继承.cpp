#include <iostream>
using namespace std;

class Animal
{
public:

	int m_Age;

};

//������̳� ������μ̳е�����
//�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ�����
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

	//�����μ̳�ʱ����������ӵ����ͬ���ݣ�Ҫ���������������
	cout << "sheep_age = " << yt.Sheep::m_Age << endl;
	cout << "camel_age = " << yt.Camel::m_Age << endl;

	//�����������֪����ֻҪ��һ�ݾͿ��ԣ��������ݵ��������ظ�����Դ�˷�
	cout << "yt_age = " << yt.m_Age << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}