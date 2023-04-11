#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
using namespace std;

#define FILENAME "workfile.txt"

//ְ������ϵͳ��

class WorkerManger
{
public:

	WorkerManger();

	//��ӡ�б�������
	void Show_Menu();

	//����ְ��ͨ������
	Worker** workArray;

	//���ְ��
	void Add_Worker();

	//����ְ����Ϣ�ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileFlag;

	//ͳ���ļ�����
	int getWorkNum();

	//��¼ְ������
	int m_WorkNum;

	//��ʼ��ְ����Ϣ�ļ�
	void Init_Worker();

	//��ʾְ��
	void Show_Worker();

	//�ж�ְ���Ƿ����
	int isExist(int id);

	//ɾ��ְ��
	void Del_Worker();

	//�޸�ְ��
	void Mod_Worker();

	//����ְ��
	void Find_Worker();

	//����ְ��
	void Sort_Worker();

	//����ļ�
	void Clear_Worker();

	~WorkerManger();

};