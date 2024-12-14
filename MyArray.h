#pragma once


class MyArray
{
private:
	unsigned int size;
	int* arr;
public:
	MyArray();
	MyArray(unsigned int size);
	MyArray(unsigned int size, int* arr);
	void printArray() const;
	void setSize(unsigned int size);
	unsigned int getSize() const;
	int* getArr()const;
	MyArray(const MyArray& obj);
	void sortArray();
	int minNum();
	int maxNum();
	~MyArray();

};

