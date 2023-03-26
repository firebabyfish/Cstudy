#include <iostream>
using namespace std;
#include <string>

#define MAX 1000 //定义最大人数

//联系人结构体
struct Person {
	string Name;
	int Gender;
	int Age;
	string Phone;
	string Addr;
};

//通讯录结构体
struct Contact {
	struct Person person[MAX];
	int Num;
};

//通讯录功能列表
void Menu()
{
	cout << "*********************************" << endl;
	cout << "********  1、添加联系人  ********" << endl;
	cout << "********  2、显示联系人  ********" << endl;
	cout << "********  3、删除联系人  ********" << endl;
	cout << "********  4、查找联系人  ********" << endl;
	cout << "********  5、修改联系人  ********" << endl;
	cout << "********  6、清空联系人  ********" << endl;
	cout << "********  0、退出通讯录  ********" << endl;
	cout << "*********************************" << endl;
}

//1、添加联系人
void addPerson(Contact * contact)
{
	//判断通信录是否已满
	if (contact->Num == MAX)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		contact->person[contact->Num].Name = name;

		//性别
		int gender = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
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
				cout << "输入错误，请重新输入" << endl;
			}
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		contact->person[contact->Num].Age = age;

		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		contact->person[contact->Num].Phone = phone;

		//住址
		string addr;
		cout << "请输入家庭住址：" << endl;
		cin >> addr;
		contact->person[contact->Num].Addr = addr;

		cout << "添加成功！" << endl;
		contact->Num++; //更新通讯录人数
	}
	system("pause"); //界面停留
	system("cls"); //清屏
}

//2、显示联系人
void showPerson(Contact* contact)
{
	//判断通讯录人数是否为0
	if (contact->Num == 0)
	{
		cout << "当前通讯录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < contact->Num; i++)
		{
			cout << "姓名：" << contact->person[i].Name << "\t";
			cout << "性别：" << (contact->person[i].Gender == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << contact->person[i].Age << "\t";
			cout << "电话：" << contact->person[i].Phone << "\t";
			cout << "住址：" << contact->person[i].Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测是否有输入的姓名
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

//3、删除联系人
void delPerson(Contact * contact)
{
	string name;
	cout << "请输入您要删除的联系人：" << endl;
	cin >> name;
	int ret = isExist(contact, name);
	//判断是否存在联系人,存在则删除
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < contact->Num; i++)
		{
			contact->person[i] = contact->person[i + 1]; //数据前移
		}
		contact->Num--; //更新人数
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

//4、查找联系人
void findPerson(Contact* contact)
{
	string name;
	cout << "请输入您要查找的联系人：" << endl;
	cin >> name;
	int ret = isExist(contact, name); //判断是否存在联系人
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else //存在则打印其信息
	{
		cout << "姓名：" << contact->person[ret].Name << "\t";
		cout << "性别：" << (contact->person[ret].Gender == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << contact->person[ret].Age << "\t";
		cout << "电话：" << contact->person[ret].Phone << "\t";
		cout << "住址：" << contact->person[ret].Addr << endl;
	}
	system("pause");
	system("cls");
}

//5、修改联系人
void changePerson(Contact * contact)
{
	string name;
	cout << "请输入您要修改的联系人：" << endl;
	cin >> name;
	int ret = isExist(contact, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else //存在则修改其信息
	{
		//姓名
		cout << "请输入姓名：" << endl;
		cin >> name;
		contact->person[ret].Name = name;

		//性别
		int gender = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
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
				cout << "输入错误，请重新输入" << endl;
			}
		}

		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		contact->person[ret].Age = age;

		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		contact->person[ret].Phone = phone;

		//住址
		string addr;
		cout << "请输入家庭住址：" << endl;
		cin >> addr;
		contact->person[ret].Addr = addr;

		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}

//6、清空联系人
void cleanPerson(Contact * contact)
{
	int input = 0;
	cout << "您确定清空通讯录吗" << endl;
	while (1)
	{
		cout << "1 --- 是" << endl;
		cout << "2 --- 否" << endl;
		cin >> input;
		if (input == 1)
		{
			contact->Num = 0;
			cout << "通讯录已清空" << endl;
			break;
		}
		else if (input == 2)
		{
			cout << "您已放弃清空通讯录" << endl;
			break;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
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
		Menu(); //打印通讯录功能列表
		cin >> input; //选择功能
		switch (input)
		{
		case 1: //添加联系人
			addPerson(&contact);
			break;
		case 2: //显示联系人
			showPerson(&contact);
			break;
		case 3: //删除联系人
			delPerson(&contact);
			break;
		case 4: //查找联系人
			findPerson(&contact);
			break;
		case 5: //修改联系人
			changePerson(&contact);
			break;
		case 6: //清空联系人
			cleanPerson(&contact);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		}
	}

	system("pause");
	return 0;
}