#include "Circle.h"
#include "Point.h"

//�ж�Բ���Ĺ�ϵ
void isCircle(Circle& c, Point& p)
{
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int length = c.getR() * c.getR();
	if (distance > length)
	{
		cout << "�õ���Բ��" << endl;
	}
	else if (distance == length)
	{
		cout << "�õ���Բ��" << endl;
	}
	else
	{
		cout << "�õ���Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(9);

	//�жϹ�ϵ
	isCircle(c, p);

	system("pause");
	return 0;
}