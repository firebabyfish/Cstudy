#include <iostream>
using namespace std;
#include "workerManger.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"

//ְ������ϵͳ����ʵ��
WorkerManger::WorkerManger()
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		/*cout << "�ļ�������" << endl;*/
		//��ʼ������
		//��ʼ����¼����
		this->m_WorkNum = 0;
		//��ʼ������ָ��
		this->workArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ���ж�
		this->m_FileFlag = true;
		ifs.close();
		return;
	}

	//2���ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		////�ļ�Ϊ��
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ����¼����
		this->m_WorkNum = 0;
		//��ʼ������ָ��
		this->workArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ���ж�
		this->m_FileFlag = true;
		ifs.close();
		return;
	}

	//3���ļ������Ҳ�Ϊ��
	int num = this->getWorkNum();
	//cout << "ְ������Ϊ��" << num << endl;
	this->m_WorkNum = num;

	//���ٶ����ռ�
	this->workArray = new Worker * [this->m_WorkNum];
	//��ȡ�ļ���ŵ�������
	this->Init_Worker();

	////����
	//for (int i = 0; i < this->m_WorkNum; i++)
	//{
	//	cout << this->workArray[i]->m_Id << " "
	//		<< this->workArray[i]->m_Name << " "
	//		<< this->workArray[i]->getDepName() << endl;
	//}

}

//��ӡѡ���б���ʵ��
void WorkerManger::Show_Menu()
{
	cout << "**********************************************" << endl;
	cout << "***********  ��ӭʹ��ְ������ϵͳ  ***********" << endl;
	cout << "*************  0���˳�����ϵͳ  **************" << endl;
	cout << "*************  1������ְ����Ϣ  **************" << endl;
	cout << "*************  2����ʾְ����Ϣ  **************" << endl;
	cout << "*************  3��ɾ����ְְ��  **************" << endl;
	cout << "*************  4���޸�ְ����Ϣ  **************" << endl;
	cout << "*************  5������ְ����Ϣ  **************" << endl;
	cout << "*************  6�����ձ������  **************" << endl;
	cout << "*************  7����������ĵ�  **************" << endl;
	cout << "**********************************************" << endl;
	cout << endl;
}

//���ְ������ʵ��
void WorkerManger::Add_Worker()
{
	cout << "���������ְ����������" << endl;
	
	int addNum = 0; //�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ�Ĵ�С
		int newSize = this->m_WorkNum + addNum; // �¿ռ��С = ���пռ� + ��ӿռ�

		Worker ** newspace = new Worker* [newSize];

		//�ж��Ƿ���Ա�����еĻ����������ٵ��¿ռ�
		if (this->workArray != NULL)
		{
			for (int i = 0; i < this->m_WorkNum; i++)
			{
				newspace[i] = this->workArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id; //ְ�����
			string name; //ְ������
			int depid; //ְ��ְλ

			cout << "�������" << i + 1 << "λ��ְ���ı�ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "λ��ְ����������" << endl;
			cin >> name;
			cout << "��ѡ���ְ����ְλ��" << endl;
			cout << "1��Ա��" << endl;
			cout << "2������" << endl;
			cout << "3���ܲ�" << endl;
			cin >> depid;

			Worker* worker = NULL;

			switch (depid)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manger(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			newspace[this->m_WorkNum + i] = worker;

		}

		//�ͷ�ԭ�пռ�
		delete[] this->workArray;

		//���¸����¿ռ�
		this->workArray = newspace;

		//����Ա������
		this->m_WorkNum = newSize;

		this->m_FileFlag = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "λ��ְ��" << endl;

		//���浽�ļ���
		this->save();

		delete[] newspace;

	}
	else
	{
		cout << "�������" << endl;
	}

	system("pause");
	system("cls");

}

//����ְ���ļ�
void WorkerManger::save()
{
	//����������
	ofstream ofs;

	//���ļ�
	ofs.open(FILENAME, ios::out);

	//д�ļ�
	for (int i = 0; i < this->m_WorkNum; i++)
	{
		ofs << this->workArray[i]->m_Id << "  "
			<< this->workArray[i]->m_Name << "  "
			<< this->workArray[i]->getDepName() << endl;
	}

	//�ر��ļ�
	ofs.close();

}

int WorkerManger::getWorkNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	string depname;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> depname)
	{
		//ͳ������
		num++;
	}

	return num;

}

void WorkerManger::Init_Worker()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	string depname;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> depname)
	{
		Worker* worker = NULL;

		if (depname == "Ա��")
		{
			worker = new Employee(id, name, 1);
		}
		else if (depname == "����")
		{
			worker = new Manger(id, name, 2);
		}
		else
		{
			worker = new Boss(id, name, 3);
		}

		//��ȡ�ļ�
		this->workArray[index] = worker;
		index++;

	}

	ifs.close();

}

void WorkerManger::Show_Worker()
{
	if (this->m_FileFlag) //�ļ�Ϊ��
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_WorkNum; i++)
		{
			this->workArray[i]->ShowInfo();
		}

	}

	system("pause");
	system("cls");

}

int WorkerManger::isExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_WorkNum; i++)
	{
		if (this->workArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	
	return index;

}

void WorkerManger::Del_Worker()
{
	if (this->m_FileFlag)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		int input;
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		cin >> input;

		int index = this->isExist(input);

		if (index == EOF)
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
		else
		{
			for (int i = input; i < this->m_WorkNum - 1; i++)
			{
				//����ǰ��
				this->workArray[i] = this->workArray[i + 1];
			}
			this->m_WorkNum--; //���������е���Ա����
			this->save(); //����ͬ�����µ��ļ���

			cout << "ɾ���ɹ���" << endl;

		}

	}

	system("pause");
	system("cls");

}

void WorkerManger::Mod_Worker()
{
	if (this->m_FileFlag)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
		int input;
		cin >> input;

		int ret = this->isExist(input);

		if (ret == EOF)
		{
			cout << "�޸�ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
		else
		{
			delete this->workArray[ret];

			int newid;
			string newname;
			int newdepid;

			cout << "�鵽���Ϊ" << input << "��Ա�����������µı�ţ�" << endl;
			cin >> newid;
			cout << "��������������" << endl;
			cin >> newname;
			cout << "��ѡ���ְ������ְλ��" << endl;
			cout << "1��Ա��" << endl;
			cout << "2������" << endl;
			cout << "3���ܲ�" << endl;
			cin >> newdepid;

			Worker* worker = NULL;
			switch (newdepid)
			{
			case 1:
				worker = new Employee(newid, newname, newdepid);
				break;
			case 2:
				worker = new Manger(newid, newname, newdepid);
				break;
			case 3:
				worker = new Boss(newid, newname, newdepid);
				break;
			default:
				break;
			}

			//�������ݵ�������
			this->workArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;

			//�����޸ĵ�����
			this->save();

		}
	}

	system("pause");
	system("cls");

}

void WorkerManger::Find_Worker()
{
	if (this->m_FileFlag)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ����ҵķ�ʽ��" << endl;
		cout << "1��ְ�����" << endl;
		cout << "2��ְ������" << endl;
		int select; //ѡ����ʲô��ʽ����
		cin >> select;

		if (select == 1)
		{
			cout << "��������Ҫ���ҵ�ְ����ţ�" << endl;
			int input_id;
			cin >> input_id;

			int ret = this->isExist(input_id);

			if (ret == EOF)
			{
				cout << "����ʧ�ܣ�δ�ҵ���ְ��" << endl;
			}
			else
			{
				cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
				this->workArray[ret]->ShowInfo();
			}
		}
		else if (select == 2)
		{
			cout << "��������Ҫ���ҵ�ְ��������" << endl;
			string input_name;
			cin >> input_name;

			bool flag = false;
			for (int i = 0; i < this->m_WorkNum; i++)
			{
				if (this->workArray[i]->m_Name == input_name)
				{
					cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
					this->workArray[i]->ShowInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				//���޴���
				cout << "����ʧ�ܣ�δ�ҵ���ְ��" << endl;
			}

		}
		
	}

	system("pause");
	system("cls");

}

void WorkerManger::Sort_Worker()
{
	if (this->m_FileFlag)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1������" << endl;
		cout << "2������" << endl;

		int select;
		cin >> select;

		for (int i = 0; i < this->m_WorkNum; i++)
		{
			int minid = i;
			for (int j = i + 1; j < this->m_WorkNum; j++)
			{
				if (select == 1) //����
				{
					if (this->workArray[i]->m_Id > this->workArray[j]->m_Id)
					{
						minid = j;
					}
				}
				else //����
				{
					if (this->workArray[i]->m_Id < this->workArray[j]->m_Id)
					{
						minid = j;
					}
				}

				if (i != minid)
				{
					Worker* temp = workArray[i];
					workArray[i] = workArray[minid];
					workArray[minid] = temp;
				}

			}

		}

		cout << "����ɹ���������Ϊ��" << endl;
		this->save();
		this->Show_Worker();

 	}

}

void WorkerManger::Clear_Worker()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select;
	cin >> select;

	if (select == 1)
	{
		//��ģʽ ios::trunc  ������� ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->workArray != NULL)
		{
			for (int i = 0; i < this->m_WorkNum; i++)
			{
				if (workArray[i] != NULL)
				{
					delete workArray[i];
				}
			}
			this->m_WorkNum = 0;
			delete[] this->workArray;
			this->workArray = NULL;
			this->m_FileFlag = true;
		}

		cout << "��ճɹ���" << endl;

	}

	system("pause");
	system("cls");

}

WorkerManger::~WorkerManger()
{
	if (this->workArray != NULL)
	{
		for (int i = 0; i < this->m_WorkNum; i++)
		{
			if (workArray[i] != NULL)
			{
				delete workArray[i];
			}
		}
		delete[] this->workArray;
		this->workArray = NULL;
	}
}





