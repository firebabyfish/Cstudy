#include <iostream>
using namespace std;
#include <string>
#include <cmath>

const double PI = 3.14;

//1、封装的意义：将属性与行为作为一个整体，用来表现生活中的事物
//封装一个函数求圆的周长
class Circle1
{
public: //公共权限
	
	//属性
	int r; //半径

	//行为
	double calculate()
	{
		return 2 * PI * r;
	}

};

//学生类：
//属性：姓名，学号（可赋值）
//行为：输入显示姓名，学号
class Student
{
	//类中的属性和行为统称为成员
	//属性为成员属性/成员变量
	//行为为成员函数/成员方法

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
		cout << "您的姓名是" << Name << endl;
		cout << "您的学号是" << ID << endl;
	}
};

//成员属性设置为私有
//1、可以自己控制读写
//2、对于写可以检测数据有效性

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
	//姓名  可读写
	string Name;
	//年龄  可读
	int Age = 18;
	//情人  可写
	string Couple;
};

//立方体类
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
//	////通过圆类创建一个对象c1
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
//	//cout << p1.setCouple << endl;  无法调用私有权限的数据
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
//		cout << "c1与c2相同" << endl;
//	}
//	else
//	{
//		cout << "c1与c2不同" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

/*****************************************************************************************************/
//class Point
//{
//public:
//	//设置x坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x坐标
//	int getX()
//	{
//		return m_X;
//	}
//	//设置y坐标
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取y坐标
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
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//	////设置圆心x坐标
//	//void setCenterX(int x)
//	//{
//	//	m_Center.setX(x);
//	//}
//	////设置圆心y坐标
//	//void setCenterY(int y)
//	//{
//	//	m_Center.setY(y);
//	//}
//	
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	////获取圆心x坐标
//	//int getCenterX()
//	//{
//	//	return m_Center.getX();
//	//}
//	////获取圆心y坐标
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



