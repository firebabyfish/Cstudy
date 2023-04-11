#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
using namespace std;

#define FILENAME "workfile.txt"

//职工管理系统类

class WorkerManger
{
public:

	WorkerManger();

	//打印列表函数声明
	void Show_Menu();

	//创建职工通用数组
	Worker** workArray;

	//添加职工
	void Add_Worker();

	//保存职工信息文件
	void save();

	//判断文件是否为空
	bool m_FileFlag;

	//统计文件人数
	int getWorkNum();

	//记录职工人数
	int m_WorkNum;

	//初始化职工信息文件
	void Init_Worker();

	//显示职工
	void Show_Worker();

	//判断职工是否存在
	int isExist(int id);

	//删除职工
	void Del_Worker();

	//修改职工
	void Mod_Worker();

	//查找职工
	void Find_Worker();

	//排序职工
	void Sort_Worker();

	//清空文件
	void Clear_Worker();

	~WorkerManger();

};