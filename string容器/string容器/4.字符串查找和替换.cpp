//#include <iostream>
//using namespace std;
//
///*
//- int find(const string& str, int pos = 0) const;      //����str��һ�γ���λ��,��pos��ʼ����
//- int find(const char* s, int pos = 0) const;          //����s��һ�γ���λ��,��pos��ʼ����
//- int find(const char* s, int pos, int n) const;       //��posλ�ò���s��ǰn���ַ���һ��λ��
//- int find(const char c, int pos = 0) const;           //�����ַ�C��һ�γ���λ��
//- int rfind(const string& str, int pos = npos) const;  //����str���һ��λ��,��pos��ʼ����
//- int rfind(const char* s, int pos = npos) const;      //����s���һ�γ���λ��,��pos��ʼ����
//- int rfind(const char* s, int pos, int n) const;      //��pos����s��ǰn���ַ����һ��λ��
//- int rfind(const char c, int pos = 0) const;          //�����ַ�C���һ�γ���λ��
//- string& replace(int pos, int n, const string& str);  //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//- string& replace(int pos, int n,const char* s);       //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
//*/
//
////1������
//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("de"); //�Ҳ�������-1
//	if (pos == EOF)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//	//rfind����������ң�find�������Ҳ���
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//
//}
//
////�滻
//void test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "11111"); //��1λ����3���ַ��滻��11111
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}