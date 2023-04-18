#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T>
class MyArray
{
public:

	//�вι���     ����
	MyArray(int capacity)
	{
		//cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddr = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//���
		this->pAddr = new T[arr.m_Capacity];

		//����arr�е�����
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}
	}

	//"="����:��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "=����" << endl;
		//�ж�ԭ�����ݶ����Ƿ������ݣ�����������
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->pAddr = new T[arr.m_Capacity];
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}

		return *this;

	}

	//β�巨
	void inTail(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
			cout << "Array full!" << endl;
		}

		this->pAddr[this->m_Size] = val; //������ĩβ��������
		this->m_Size++; //���������С

	}

	//βɾ��
	void delTail()
	{
		//���û����ʲ������һλ���ݣ���Ϊβɾ
		if (!this->m_Size)
		{
			return;
		}

		this->m_Size--; //�������ݴ�С

	}

	//ͨ���±귽ʽ��������
	T& operator[](int index)
	{
		return this->pAddr[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		//cout << "��������" << endl;
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
		}
	}

private:

	T* pAddr; //ָ��ָ��������ٵ�����

	int m_Capacity; //��������

	int m_Size; //�����С

};