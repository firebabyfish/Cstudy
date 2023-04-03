#include <iostream>
using namespace std;
#include <string>
#include <cmath>

const double PI = 3.14;

//1����װ�����壺����������Ϊ��Ϊһ�����壬�������������е�����
//��װһ��������Բ���ܳ�
class Circle1
{
public: //����Ȩ��
	
	//����
	int r; //�뾶

	//��Ϊ
	double calculate()
	{
		return 2 * PI * r;
	}

};

//ѧ���ࣺ
//���ԣ�������ѧ�ţ��ɸ�ֵ��
//��Ϊ��������ʾ������ѧ��
class Student
{
	//���е����Ժ���Ϊͳ��Ϊ��Ա
	//����Ϊ��Ա����/��Ա����
	//��ΪΪ��Ա����/��Ա����

	string Name;
	int ID;

public:
	void setName(string name)
	{
		Name = name;
	}

	void setID(int id)
	{
		ID = id;
	}

	void showStudent()
	{
		cout << "����������" << Name << endl;
		cout << "����ѧ����" << ID << endl;
	}
};

//��Ա��������Ϊ˽��
//1�������Լ����ƶ�д
//2������д���Լ��������Ч��

class Person
{
public:
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	int getAge()
	{
		return Age;
	}
	void setCouple(string couple)
	{
		Couple = couple;
	}

private:
	//����  �ɶ�д
	string Name;
	//����  �ɶ�
	int Age = 18;
	//����  ��д
	string Couple;
};

//��������
class Cube
{
private:
	double c_H;
	double c_W;
	double c_L;

public:
	void setData(double l, double w, double h)
	{
		c_H = h;
		c_W = w;
		c_L = l;
	}

	double getL()
	{
		return c_L;
	}

	double getW()
	{
		return c_W;
	}

	double getH()
	{
		return c_H;
	}

	double calculate_S()
	{
		double S = 2 * (c_H * c_W + c_H * c_L + c_L * c_W );
		return S;
	}

	double calculate_V()
	{
		return c_H * c_W * c_L;
	}

	bool isSame(Cube& c)
	{
		if (c_L == c.getL() && c_W == c.getW() && c_H == c.getH())
		{
			return true;
		}
		return false;
	}
};

//int main()
//{
//	////ͨ��Բ�ഴ��һ������c1
//	//Circle c1; 
//	//c1.r = 10;
//	//
//	//cout << c1.calculate() << endl;
//
//	//Student s1;
//	//s1.setName("Tom");
//	//s1.setID(10086);
//	//s1.showStudent();
//
//	//Person p1;
//	//p1.setName("Tom");
//	//cout << p1.getName() << endl;
//	//cout << p1.getAge() << endl;
//	//p1.setCouple("Andy");
//	//cout << p1.setCouple << endl;  �޷�����˽��Ȩ�޵�����
//
//	Cube c1;
//	Cube c2;
//
//	c1.setData(10, 10, 10);
//	c2.setData(10, 10, 10);
//
//	cout << c1.calculate_S() << endl;
//	cout << c1.calculate_V() << endl;
//
//	bool ret = c1.isSame(c2);
//	if (ret)
//	{
//		cout << "c1��c2��ͬ" << endl;
//	}
//	else
//	{
//		cout << "c1��c2��ͬ" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

/*****************************************************************************************************/
//class Point
//{
//public:
//	//����x����
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx����
//	int getX()
//	{
//		return m_X;
//	}
//	//����y����
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy����
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//	////����Բ��x����
//	//void setCenterX(int x)
//	//{
//	//	m_Center.setX(x);
//	//}
//	////����Բ��y����
//	//void setCenterY(int y)
//	//{
//	//	m_Center.setY(y);
//	//}
//	
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	////��ȡԲ��x����
//	//int getCenterX()
//	//{
//	//	return m_Center.getX();
//	//}
//	////��ȡԲ��y����
//	//int getCenterY()
//	//{
//	//	return m_Center.getY();
//	//}
//
//private:
//	int m_R;
//	Point m_Center;
//
//};



