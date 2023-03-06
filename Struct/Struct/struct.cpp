#include<iostream>
using namespace std;
#include <string>
#include <ctime>

//创建一个简单结构体student
//struct student {
//	//学生号数
//	int id;
//	//学生名称
//	string name;
//	//学生年龄
//	int age;
//	//学生分数
//	int score;
//};
//
//int main()
//{
//	//结构体的简单实用
//	//创建一个学生
//	struct student s = { 21, "张帅", 18, 98 };
//
//	cout << "该学生号数为：" << s.id << endl;
//	cout << "该学生名字为：" << s.name << endl;
//	cout << "该学生年龄为：" << s.age << endl;
//	cout << "该学生分数为：" << s.score << endl;
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//创建一个结构体数组并为其赋上初值
//	struct student s[3] = {
//		{ 1, "张三", 18, 87 },
//		{ 2, "李四", 19, 88 },
//		{ 3, "王五", 20, 90 },
//	};
//
//	/*cout << s[0].id << " " << s[0].name << " " << s[0].age << " " << s[0].score << endl;
//	cout << s[1].id << " " << s[1].name << " " << s[1].age << " " << s[1].score << endl;
//	cout << s[2].id << " " << s[2].name << " " << s[2].age << " " << s[2].score << endl;*/
//
//	//使用for循环遍历数组
//	for (int i = 0; i < 3; i++)
//	{
//		cout << s[i].id << " " << s[i].name << " " << s[i].age << " " << s[i].score << endl;
//	}
//
//	system("pause");
//	return 0;
//}





////结构体案例1
//
////学生结构体定义
//struct Student
//{
//	//学生姓名
//	string sName;
//	//学生分数
//	int score;
//};
//
////老师结构体定义
//struct Teacher
//{
//	//老师姓名
//	string tName;
//	//老师带的学生
//	struct Student sArray[5];
//};
//
//void DataSet(struct Teacher tArray[], int len)
//{
//	//老师与学生共用编号
//	string Name = "ABCDE";
//	//结构体的初始值设置
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += Name[i];
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += Name[j];
//			//设置一个随机数
//			int random = rand() % 61 + 40;
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//
////打印出结构体的数据
//void printfData(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师名称：" << tArray[i].tName << endl << "所带学生：" << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生名称：" << tArray[i].sArray[j].sName
//				<< " 成绩：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	DataSet(tArray, len);
//	printfData(tArray, len);
//	
//	return 0;
//}




//结构体案例2

//英雄结构体定义
struct Hero
{
	string name;
	int age;
	string gender;
};

//冒泡升序列函数
void Bubble_Sort(struct Hero hArray[], int len)
{
	struct Hero hTemp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (hArray[i].age > hArray[j ].age)
			{
				hTemp = hArray[i];
				hArray[i] = hArray[j];
				hArray[j] = hTemp;
			}
		}
	}
}

int main()
{
	struct Hero hArray[5] =
	{
		{"刘备", 34, "男"},
		{"关羽", 29, "男"},
		{"张飞", 27, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 15, "女"},
	};
	int len = sizeof(hArray) / sizeof(hArray[0]);
	Bubble_Sort(hArray, len);
	for (int i = 0; i < len; i++)
	{
		cout << "第" << i + 1 << "位英雄名称为：" << hArray[i].name <<
			"，性别为" << hArray[i].gender << "，年龄" << hArray[i].age << endl;
	}

	return 0;
}