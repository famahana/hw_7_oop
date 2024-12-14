#include "MyArray.h"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
	this->size = 0;
	this->arr = nullptr;
}

MyArray::MyArray(unsigned int size)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size] {};
	}
	else
	{
		this->arr = nullptr;
	}

}

MyArray::MyArray(unsigned int size, int* arr)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
}

void MyArray::printArray() const
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i] << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::setSize(unsigned int size)
{
	this->size = size;
}


unsigned int MyArray::getSize() const
{
	return this->size;
}

int* MyArray::getArr() const
{
	return arr;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	if (this->size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
}

void MyArray::sortArray()
{
	if (this->size > 0)
	{
		for (unsigned int i = 0; i < this->size - 1; ++i)
		{
			for (unsigned int j = 0; j < this->size - i - 1; ++j)
			{
				if (this->arr[j] > this->arr[j + 1])
				{
					int temp = this->arr[j];
					this->arr[j] = this->arr[j + 1];
					this->arr[j + 1] = temp;
				}
			}
		}
	}
}




int MyArray::minNum()
{
	if (this->size == 0)
	{
		return 0;
	}
	int min = this->arr[0];
	for (unsigned int i = 1; i < this->size; i++)
	{
		if (this->arr[i] < min)
		{
			min = this->arr[i];
		}
	}
	return min;
}

int MyArray::maxNum()
{
	if (this->size == 0)
	{
		return 0;
	}
	int max = this->arr[0];
	for (unsigned int i = 1; i < this->size; i++)
	{
		if (this->arr[i] > max)
		{
			max = this->arr[i];
		}
	}
	return max;
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
	{
		delete[] arr;
	}
}

