#include "manger.h"

Manger::Manger(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

//չʾ������Ϣ����ʵ��
void Manger::ShowInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\tְ����λ:" << this->getDepName()
		<< "\tְ��ְ��:����ϰ�ַ������񣬲���Ա���·�����" << endl;
}

//��ʾ��λ���ƺ�����ʵ��
string Manger::getDepName()
{
	return string("����");
}