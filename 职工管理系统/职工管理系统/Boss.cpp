#include "boss.h"

Boss::Boss(int id, string name, int depid)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = depid;
}

//չʾ������Ϣ����ʵ��
void Boss::ShowInfo()
{
	cout << "ְ�����:" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\tְ����λ:" << this->getDepName()
		<< "\tְ��ְ��:����˾��������" << endl;
}

//��ʾ��λ���ƺ�����ʵ��
string Boss::getDepName()
{
	return string("�ܲ�");
}