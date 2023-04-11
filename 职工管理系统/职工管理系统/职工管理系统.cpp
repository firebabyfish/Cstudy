#include <iostream>
using namespace std;
#include "workerManger.h"
#include "worker.h"
#include "employee.h"
#include "manger.h"
#include "boss.h"

void test()
{
	Worker* worker1 = NULL;
	worker1 = new Employee(1, "张三", 1);
	worker1->ShowInfo();

	Worker* worker2 = NULL;
	worker2 = new Manger(2, "李四", 2);
	worker2->ShowInfo();

	Worker* worker3 = NULL;
	worker3 = new Boss(3, "王五", 3);
	worker3->ShowInfo();
}

int main()
{
	//test();
	WorkerManger wm;
	int input = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> input;
		switch (input)
		{
		case 0:
			cout << "已退出职工管理系统" << endl;
			system("pause");
			return 0;
		case 1:
			wm.Add_Worker();
			break;
		case 2:
			wm.Show_Worker();
			break;
		case 3:
			wm.Del_Worker();
			break;
		case 4:
			wm.Mod_Worker();
			break;
		case 5:
			wm.Find_Worker();
			break;
		case 6:
			wm.Sort_Worker();
			break;
		case 7:

			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}