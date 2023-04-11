#include "boss.h"

Boss::Boss(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

//展示个人信息函数实现
void Boss::ShowInfo()
{
	cout << "职工编号:" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t职工岗位:" << this->getDepName()
		<< "\t职工职能:管理公司所有事物" << endl;
}

//显示岗位名称函数下实现
string Boss::getDepName()
{
	return string("总裁");
}