#include "Array.h"

void Array::showArrray(int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void Array::addNum()
{
	this->size = size;
	int* arr = new int[this->size];
}

void Array::sortArray()
{


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
				count++;
			}
		}
	}
}

void Array::minNumInArr()
{
	int* arr = new int[size];
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < arr[0]) {
			min = arr[i];
		}
	}
	cout << min;
}

void Array::maxNumInArr()
{
	int* arr = new int[size];
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[0]) {
			max = arr[i];
		}
	}
	cout << max;
}

Array::~Array()
{
}
