#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������
//int main()
//{
//
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
// 
//  return 0;
//}

//int main()
//{
//	//�ַ�����
//	char word = 'a';
//
//	//����
//	int x1 = 1;
//	//������
//	short x2 = 2;
//	//������
//	long x3 = 3;
//
//	//������
//	float y1 = 1.1;
//	//˫������
//	double y2 = 2.2;
//
//	return 0;
//}

//��������
int a = 100;//ȫ�ֱ���
extern int add;//����add.c�еı���
#define MIN 500;
int main()
{
	//�ֲ�����
	int b = 200;//ֻ�������������
	b = b + 1;//�������Ըı�
	printf("%d\n%d\n%d\n",a,b,add);


	//����
	3.14;
	'a';
	"weight";
	
	//������
	const int a;//const���εĳ��������ɸı�

	//define����ı�ʶ������
	int n = MIN;
	printf("%d\n",n);

	//ö�ٳ���
	enum Sex
	{
		MALE, FEMALE
	};
	enum Sex s = MALE;

	return 0;
}
