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
//������ѡ�֣�ABCDE��10����ί�ֱ��ÿλѡ�����֣���ȥ��ͺ���߷֣�ȡʣ��ƽ����
//*/
//
////ѡ����
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
////����5��ѡ��
//void createPlayer(vector<Person>&player)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < SIZE; i++)
//	{
//		string name = "ѡ��";
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
////���
//void setScore(vector<Person>& player)
//{
//	for (vector<Person>::iterator it = player.begin(); it != player.end(); it++)
//	{
//		deque<int>s;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//���60-100
//			s.push_back(score);
//			//cout << "��ί" << i + 1 << "��" << it->m_Name << "�ķ���Ϊ" << score << endl;
//		}
//
//		//ȥ����߷ֺ���ͷ�
//		sort(s.begin(), s.end()); //������
//		s.pop_front();
//		s.pop_back();
//
//		//ȡƽ����
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
//		cout << (*it).m_Name << "�����յ÷�Ϊ" << (*it).m_Score << endl;
//	}
//}
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//1������5��ѡ��
//	vector<Person>player;
//	createPlayer(player);
//
//	//2����5��ѡ�ִ��
//	setScore(player);
//
//	//3����ʾ���÷�
//	showScore(player);
//
//	////����
//	//for (vector<Person>::iterator it = player.begin(); it != player.end(); it++)
//	//{
//	//	cout << "������" << (*it).m_Name << " " << "������" << (*it).m_Score << endl;
//	//}
//
//	system("pause");
//	return 0;
//}