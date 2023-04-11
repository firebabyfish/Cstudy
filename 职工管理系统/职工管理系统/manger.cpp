#include "manger.h"

Manger::Manger(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

//展示个人信息函数实现
void Manger::ShowInfo()
{
	cout << "职工编号:" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t职工岗位:" << this->getDepName()
		<< "\t职工职能:完成老板分发的任务，并给员工下发任务" << endl;
}

//显示岗位名称函数下实现
string Manger::getDepName()
{
	return string("经理");
}