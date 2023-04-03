#include "Circle.h"
#include "Point.h"

//判断圆与点的关系
void isCircle(Circle& c, Point& p)
{
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int length = c.getR() * c.getR();
	if (distance > length)
	{
		cout << "该点在圆外" << endl;
	}
	else if (distance == length)
	{
		cout << "该点在圆上" << endl;
	}
	else
	{
		cout << "该点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.setY(9);

	//判断关系
	isCircle(c, p);

	system("pause");
	return 0;
}