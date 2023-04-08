//#include <iostream>
//using namespace std;
//
////多态带来的好处
////1、组织结构清晰
////2、可读性强
////3、对于前后期拓展以及维护性强
////
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//
//};
//
//class AddCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//
//};
//
//class SubCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//
//};
//
//class MulCalculator : public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//
//};
//
//void test01()
//{
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 18;
//	abc->m_Num2 = 34;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//用完后记得销毁
//	delete abc;
//
//	abc = new SubCalculator;
//	abc->m_Num1 = 89;
//	abc->m_Num2 = 29;
//
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}