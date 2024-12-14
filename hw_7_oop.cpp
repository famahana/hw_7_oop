#include <iostream>
#include "MyArray.h"
using namespace std;



int main()
{
	int arr[] = { 10,4,6,7,8 };
	MyArray arr1 = { 5,arr };
	arr1.printArray();
	int minValue = arr1.minNum();
	cout << "Min value: " << minValue << endl;
	int maxValue = arr1.maxNum();
	cout << "Max value: " << maxValue << endl;
	arr1.sortArray();
	arr1.printArray();
	return 0;
}