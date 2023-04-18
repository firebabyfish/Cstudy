#pragma once
#include <iostream>
using namespace std;
#include <string>

template<class T>
class MyArray
{
public:

	//有参构造     容量
	MyArray(int capacity)
	{
		//cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddr = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//深拷贝
		this->pAddr = new T[arr.m_Capacity];

		//拷贝arr中的数据
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}
	}

	//"="重载:防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "=重载" << endl;
		//判断原来数据堆区是否有数据，如果有需清空
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->pAddr = new T[arr.m_Capacity];
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}

		return *this;

	}

	//尾插法
	void inTail(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
			cout << "Array full!" << endl;
		}

		this->pAddr[this->m_Size] = val; //在数组末尾插入数据
		this->m_Size++; //更新数组大小

	}

	//尾删法
	void delTail()
	{
		//让用户访问不到最后一位数据，即为尾删
		if (!this->m_Size)
		{
			return;
		}

		this->m_Size--; //更新数据大小

	}

	//通过下标方式访问数组
	T& operator[](int index)
	{
		return this->pAddr[index];
	}

	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		//cout << "析构函数" << endl;
		if (this->pAddr != NULL)
		{
			delete[] this->pAddr;
			this->pAddr = NULL;
		}
	}

private:

	T* pAddr; //指针指向堆区开辟的数组

	int m_Capacity; //数组容量

	int m_Size; //数组大小

};