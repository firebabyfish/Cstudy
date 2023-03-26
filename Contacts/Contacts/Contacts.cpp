#include <iostream>
using namespace std;
#include <string>

#define MAX 1000 //�����������

//��ϵ�˽ṹ��
struct Person {
	string Name;
	int Gender;
	int Age;
	string Phone;
	string Addr;
};

//ͨѶ¼�ṹ��
struct Contact {
	struct Person person[MAX];
	int Num;
};

//ͨѶ¼�����б�
void Menu()
{
	cout << "*********************************" << endl;
	cout << "********  1�������ϵ��  ********" << endl;
	cout << "********  2����ʾ��ϵ��  ********" << endl;
	cout << "********  3��ɾ����ϵ��  ********" << endl;
	cout << "********  4��������ϵ��  ********" << endl;
	cout << "********  5���޸���ϵ��  ********" << endl;
	cout << "********  6�������ϵ��  ********" << endl;
	cout << "********  0���˳�ͨѶ¼  ********" << endl;
	cout << "*********************************" << endl;
}

//1�������ϵ��
void addPerson(Contact * contact)
{
	//�ж�ͨ��¼�Ƿ�����
	if (contact->Num == MAX)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		contact->person[contact->Num].Name = name;

		//�Ա�
		int gender = 0;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (1)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				contact->person[contact->Num].Gender = gender;
				break;
			}
			else
			{
				cout << "�����������������" << endl;
			}
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		contact->person[contact->Num].Age = age;

		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		contact->person[contact->Num].Phone = phone;

		//סַ
		string addr;
		cout << "�������ͥסַ��" << endl;
		cin >> addr;
		contact->person[contact->Num].Addr = addr;

		cout << "��ӳɹ���" << endl;
		contact->Num++; //����ͨѶ¼����
	}
	system("pause"); //����ͣ��
	system("cls"); //����
}

//2����ʾ��ϵ��
void showPerson(Contact* contact)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0
	if (contact->Num == 0)
	{
		cout << "��ǰͨѶ¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < contact->Num; i++)
		{
			cout << "������" << contact->person[i].Name << "\t";
			cout << "�Ա�" << (contact->person[i].Gender == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << contact->person[i].Age << "\t";
			cout << "�绰��" << contact->person[i].Phone << "\t";
			cout << "סַ��" << contact->person[i].Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//����Ƿ������������
int isExist(Contact * contact, string name)
{
	for (int i = 0; i < contact->Num; i++)
	{
		if (name == contact->person[i].Name)
		{
			return i;
		}
	}
	return -1;
}

//3��ɾ����ϵ��
void delPerson(Contact * contact)
{
	string name;
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	cin >> name;
	int ret = isExist(contact, name);
	//�ж��Ƿ������ϵ��,������ɾ��
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < contact->Num; i++)
		{
			contact->person[i] = contact->person[i + 1]; //����ǰ��
		}
		contact->Num--; //��������
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//4��������ϵ��
void findPerson(Contact* contact)
{
	string name;
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	cin >> name;
	int ret = isExist(contact, name); //�ж��Ƿ������ϵ��
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else //�������ӡ����Ϣ
	{
		cout << "������" << contact->person[ret].Name << "\t";
		cout << "�Ա�" << (contact->person[ret].Gender == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << contact->person[ret].Age << "\t";
		cout << "�绰��" << contact->person[ret].Phone << "\t";
		cout << "סַ��" << contact->person[ret].Addr << endl;
	}
	system("pause");
	system("cls");
}

//5���޸���ϵ��
void changePerson(Contact * contact)
{
	string name;
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	cin >> name;
	int ret = isExist(contact, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else //�������޸�����Ϣ
	{
		//����
		cout << "������������" << endl;
		cin >> name;
		contact->person[ret].Name = name;

		//�Ա�
		int gender = 0;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (1)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				contact->person[ret].Gender = gender;
				break;
			}
			else
			{
				cout << "�����������������" << endl;
			}
		}

		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		contact->person[ret].Age = age;

		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		contact->person[ret].Phone = phone;

		//סַ
		string addr;
		cout << "�������ͥסַ��" << endl;
		cin >> addr;
		contact->person[ret].Addr = addr;

		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//6�������ϵ��
void cleanPerson(Contact * contact)
{
	int input = 0;
	cout << "��ȷ�����ͨѶ¼��" << endl;
	while (1)
	{
		cout << "1 --- ��" << endl;
		cout << "2 --- ��" << endl;
		cin >> input;
		if (input == 1)
		{
			contact->Num = 0;
			cout << "ͨѶ¼�����" << endl;
			break;
		}
		else if (input == 2)
		{
			cout << "���ѷ������ͨѶ¼" << endl;
			break;
		}
		else
		{
			cout << "�����������������" << endl;
		}
	}
	system("pause");
	system("cls");
}

int main()
{
	int input = 0;
	struct Contact contact;
	contact.Num = 0;

	while (1)
	{
		Menu(); //��ӡͨѶ¼�����б�
		cin >> input; //ѡ����
		switch (input)
		{
		case 1: //�����ϵ��
			addPerson(&contact);
			break;
		case 2: //��ʾ��ϵ��
			showPerson(&contact);
			break;
		case 3: //ɾ����ϵ��
			delPerson(&contact);
			break;
		case 4: //������ϵ��
			findPerson(&contact);
			break;
		case 5: //�޸���ϵ��
			changePerson(&contact);
			break;
		case 6: //�����ϵ��
			cleanPerson(&contact);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		}
	}

	system("pause");
	return 0;
}