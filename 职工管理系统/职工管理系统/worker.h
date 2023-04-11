#pragma once
#include <iostream>
#include <string>
using namespace std;

//创建员工抽象基类
class Worker
{
public:

	//显示个人信息
	virtual void ShowInfo() = 0;

	//显示岗位名称
	virtual string getDepName() = 0;


	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//职工职能
	int m_DepId;

};