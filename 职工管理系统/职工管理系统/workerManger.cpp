#include <iostream>
using namespace std;
#include "workerManger.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"

//职工管理系统函数实现
WorkerManger::WorkerManger()
{
	//1、文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		/*cout << "文件不存在" << endl;*/
		//初始化属性
		//初始化记录人数
		this->m_WorkNum = 0;
		//初始化数组指针
		this->workArray = NULL;
		//初始化文件是否为空判断
		this->m_FileFlag = true;
		ifs.close();
		return;
	}

	//2、文件存在，并且为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		////文件为空
		//cout << "文件为空" << endl;
		//初始化记录人数
		this->m_WorkNum = 0;
		//初始化数组指针
		this->workArray = NULL;
		//初始化文件是否为空判断
		this->m_FileFlag = true;
		ifs.close();
		return;
	}

	//3、文件存在且不为空
	int num = this->getWorkNum();
	//cout << "职工人数为：" << num << endl;
	this->m_WorkNum = num;

	//开辟堆区空间
	this->workArray = new Worker * [this->m_WorkNum];
	//读取文件存放到数组中
	this->Init_Worker();

	////测试
	//for (int i = 0; i < this->m_WorkNum; i++)
	//{
	//	cout << this->workArray[i]->m_Id << " "
	//		<< this->workArray[i]->m_Name << " "
	//		<< this->workArray[i]->getDepName() << endl;
	//}

}

//打印选择列表功能实现
void WorkerManger::Show_Menu()
{
	cout << "**********************************************" << endl;
	cout << "***********  欢迎使用职工管理系统  ***********" << endl;
	cout << "*************  0、退出管理系统  **************" << endl;
	cout << "*************  1、增加职工信息  **************" << endl;
	cout << "*************  2、显示职工信息  **************" << endl;
	cout << "*************  3、删除离职职工  **************" << endl;
	cout << "*************  4、修改职工信息  **************" << endl;
	cout << "*************  5、查找职工信息  **************" << endl;
	cout << "*************  6、按照编号排序  **************" << endl;
	cout << "*************  7、清空所有文档  **************" << endl;
	cout << "**********************************************" << endl;
	cout << endl;
}

//添加职工功能实现
void WorkerManger::Add_Worker()
{
	cout << "请输入添加职工的数量：" << endl;
	
	int addNum = 0; //保存用户的输入数量
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新空间的大小
		int newSize = this->m_WorkNum + addNum; // 新空间大小 = 现有空间 + 添加空间

		Worker ** newspace = new Worker* [newSize];

		//判断是否有员工，有的话拷贝至开辟的新空间
		if (this->workArray != NULL)
		{
			for (int i = 0; i < this->m_WorkNum; i++)
			{
				newspace[i] = this->workArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id; //职工编号
			string name; //职工姓名
			int depid; //职工职位

			cout << "请输入第" << i + 1 << "位新职工的编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "位新职工的姓名：" << endl;
			cin >> name;
			cout << "请选择该职工的职位：" << endl;
			cout << "1、员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、总裁" << endl;
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

		//释放原有空间
		delete[] this->workArray;

		//重新赋予新空间
		this->workArray = newspace;

		//更新员工人数
		this->m_WorkNum = newSize;

		this->m_FileFlag = false;

		//提示添加成功
		cout << "成功添加" << addNum << "位新职工" << endl;

		//保存到文件中
		this->save();

		delete[] newspace;

	}
	else
	{
		cout << "输入错误" << endl;
	}

	system("pause");
	system("cls");

}

//保存职工文件
void WorkerManger::save()
{
	//创建流对象
	ofstream ofs;

	//打开文件
	ofs.open(FILENAME, ios::out);

	//写文件
	for (int i = 0; i < this->m_WorkNum; i++)
	{
		ofs << this->workArray[i]->m_Id << "  "
			<< this->workArray[i]->m_Name << "  "
			<< this->workArray[i]->getDepName() << endl;
	}

	//关闭文件
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
		//统计人数
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

		if (depname == "员工")
		{
			worker = new Employee(id, name, 1);
		}
		else if (depname == "经理")
		{
			worker = new Manger(id, name, 2);
		}
		else
		{
			worker = new Boss(id, name, 3);
		}

		//读取文件
		this->workArray[index] = worker;
		index++;

	}

	ifs.close();

}

void WorkerManger::Show_Worker()
{
	if (this->m_FileFlag) //文件为空
	{
		cout << "文件不存在或记录为空！" << endl;
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
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		int input;
		cout << "请输入您要删除的职工编号：" << endl;
		cin >> input;

		int index = this->isExist(input);

		if (index == EOF)
		{
			cout << "删除失败，未找到该职工" << endl;
		}
		else
		{
			for (int i = input; i < this->m_WorkNum - 1; i++)
			{
				//数据前移
				this->workArray[i] = this->workArray[i + 1];
			}
			this->m_WorkNum--; //更新数组中的人员个数
			this->save(); //数据同步更新到文件中

			cout << "删除成功！" << endl;

		}

	}

	system("pause");
	system("cls");

}

void WorkerManger::Mod_Worker()
{
	if (this->m_FileFlag)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入您要修改的职工编号：" << endl;
		int input;
		cin >> input;

		int ret = this->isExist(input);

		if (ret == EOF)
		{
			cout << "修改失败，未找到该职工" << endl;
		}
		else
		{
			delete this->workArray[ret];

			int newid;
			string newname;
			int newdepid;

			cout << "查到编号为" << input << "的员工，请输入新的编号：" << endl;
			cin >> newid;
			cout << "请输入新姓名：" << endl;
			cin >> newname;
			cout << "请选择该职工的新职位：" << endl;
			cout << "1、员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、总裁" << endl;
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

			//更改数据到数组中
			this->workArray[ret] = worker;

			cout << "修改成功！" << endl;

			//保存修改的数据
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
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择查找的方式：" << endl;
		cout << "1：职工编号" << endl;
		cout << "2：职工姓名" << endl;
		int select; //选择用什么方式查找
		cin >> select;

		if (select == 1)
		{
			cout << "请输入您要查找的职工编号：" << endl;
			int input_id;
			cin >> input_id;

			int ret = this->isExist(input_id);

			if (ret == EOF)
			{
				cout << "查找失败，未找到该职工" << endl;
			}
			else
			{
				cout << "查找成功！该员工信息如下：" << endl;
				this->workArray[ret]->ShowInfo();
			}
		}
		else if (select == 2)
		{
			cout << "请输入您要查找的职工姓名：" << endl;
			string input_name;
			cin >> input_name;

			bool flag = false;
			for (int i = 0; i < this->m_WorkNum; i++)
			{
				if (this->workArray[i]->m_Name == input_name)
				{
					cout << "查找成功！该员工信息如下：" << endl;
					this->workArray[i]->ShowInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				//查无此人
				cout << "查找失败，未找到该职工" << endl;
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
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1：升序" << endl;
		cout << "2：降序" << endl;

		int select;
		cin >> select;

		for (int i = 0; i < this->m_WorkNum; i++)
		{
			int minid = i;
			for (int j = i + 1; j < this->m_WorkNum; j++)
			{
				if (select == 1) //升序
				{
					if (this->workArray[i]->m_Id > this->workArray[j]->m_Id)
					{
						minid = j;
					}
				}
				else //降序
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

		cout << "排序成功，排序结果为：" << endl;
		this->save();
		this->Show_Worker();

 	}

}

void WorkerManger::Clear_Worker()
{
	cout << "确认清空：" << endl;
	cout << "1：确认" << endl;
	cout << "2：返回" << endl;

	int select;
	cin >> select;

	if (select == 1)
	{
		//打开模式 ios::trunc  如果存在 删除文件并重新创建
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

		cout << "清空成功！" << endl;

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





