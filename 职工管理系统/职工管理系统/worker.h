#pragma once
#include <iostream>
#include <string>
using namespace std;

//����Ա���������
class Worker
{
public:

	//��ʾ������Ϣ
	virtual void ShowInfo() = 0;

	//��ʾ��λ����
	virtual string getDepName() = 0;


	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//ְ��ְ��
	int m_DepId;

};