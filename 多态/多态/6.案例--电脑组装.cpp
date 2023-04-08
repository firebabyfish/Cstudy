#include <iostream>
using namespace std;

//抽象CPU类
class CPU
{
public:

	virtual void calculator() = 0;

};

//抽象显卡类
class VoidCard
{
public:

	virtual void display() = 0;

};

//抽象内存条类
class Memory
{
public:

	virtual void storage() = 0;

};

class Computer
{
public:

	Computer(CPU* cpu, VoidCard* vc, Memory* mm)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mm = mm;
	}

	void work()
	{
		m_cpu->calculator();
		m_vc->display();
		m_mm->storage();
	}

	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mm != NULL)
		{
			delete m_mm;
			m_mm = NULL;
		}
	}

private:

	CPU* m_cpu;
	VoidCard* m_vc;
	Memory* m_mm;

};

//封装
//Intel
class IntelCPU : public CPU
{
public:

	virtual void calculator()
	{
		cout << "Intel的CPU开始工作" << endl;
	}

};

class IntelVoidCard : public VoidCard
{
public:

	virtual void display()
	{
		cout << "Intel的显卡开始显示" << endl;
	}

};

class IntelMemory : public Memory
{
public:

	virtual void storage()
	{
		cout << "Intel的内存开始存储" << endl;
	}

};

void test01()
{
	CPU* cpu = new IntelCPU;
	VoidCard* vc = new IntelVoidCard;
	Memory* mm = new IntelMemory;

	Computer* c1 = new Computer(cpu, vc, mm);
	c1->work();
	delete c1;
	cout << "----------------------------------" << endl;
	Computer* c2 = new Computer(new IntelCPU, new IntelVoidCard, new IntelMemory);
	c2->work();
	delete c2;

}

int main()
{
	test01();

	system("pause");
	return 0;
}