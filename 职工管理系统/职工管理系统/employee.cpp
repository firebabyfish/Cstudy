#include "employee.h"

Employee::Employee(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

//չʾ������Ϣ����ʵ��
void Employee::ShowInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\tְ����λ:" << this->getDepName()
		<< "\tְ��ְ��:��ɾ���ַ�������" << endl;
}

//��ʾ��λ���ƺ�����ʵ��
string Employee::getDepName()
{
	return string("Ա��");
}