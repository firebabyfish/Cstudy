//#include <iostream>
//using namespace std;
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <ctime>
//
//#define SIZE 5
//
///*
//有五名选手：ABCDE，10个评委分别对每位选手评分，除去最低和最高分，取剩余平均分
//*/
//
////选手类
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	string m_Name;
//	int m_Score;
//
//};
//
////创建5名选手
//void createPlayer(vector<Person>&player)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < SIZE; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//
//		player.push_back(p);
//	}
//
//}
//
////打分
//void setScore(vector<Person>& player)
//{
//	for (vector<Person>::iterator it = player.begin(); it != player.end(); it++)
//	{
//		deque<int>s;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//随机60-100
//			s.push_back(score);
//			//cout << "评委" << i + 1 << "给" << it->m_Name << "的分数为" << score << endl;
//		}
//
//		//去掉最高分和最低分
//		sort(s.begin(), s.end()); //先排序
//		s.pop_front();
//		s.pop_back();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator sit = s.begin(); sit != s.end(); sit++)
//		{
//			sum += *sit;
//		}
//
//		it->m_Score = sum / s.size();
//
//	}
//}
//
//void showScore(vector<Person>&player)
//{
//	for (vector<Person>::iterator it = player.begin(); it != player.end(); it++)
//	{
//		cout << (*it).m_Name << "的最终得分为" << (*it).m_Score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1、创建5名选手
//	vector<Person>player;
//	createPlayer(player);
//
//	//2、给5名选手打分
//	setScore(player);
//
//	//3、显示最后得分
//	showScore(player);
//
//	////测试
//	//for (vector<Person>::iterator it = player.begin(); it != player.end(); it++)
//	//{
//	//	cout << "姓名：" << (*it).m_Name << " " << "分数：" << (*it).m_Score << endl;
//	//}
//
//	system("pause");
//	return 0;
//}