#include "MyArray.h"

MyArray::MyArray(int* arr, int size, int length)
{
	this->arr = new int[size];
	this->size = size;
	this->length = 0;
	for (int i = 0; i < size; i++) {
		this->arr[i] = arr[i];
	}
}

int* MyArray::getArr()
{
	return this->arr;
}

int MyArray::getSize()
{
	return this->size;
}

int MyArray::getLength()
{
	return this->length;
}

void MyArray::print()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << this->arr[i];
	}
}

MyArray MyArray::operator+(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + myArr.arr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}

MyArray MyArray::operator-(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - myArr.arr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}

MyArray MyArray::operator*(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * myArr.arr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}

MyArray MyArray::operator/(MyArray& myArr)
{
	int* newArr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] / myArr.arr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}

bool MyArray::operator==(MyArray& myArr)
{
	if (this->size != myArr.size) {
		return 0;
	}
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] != myArr.arr[i]) {
			false;
		}
	}
	return true;
}

bool MyArray::operator!=(MyArray& myArr)
{
	if (this->size != myArr.size) {
		return 0;
	}
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] == myArr.arr[i]) {
			false;
		}
	}
	return true;
}

bool MyArray::operator>(MyArray& myArr)
{
    int sum1 = 0;
    int sum2 = 0;
    if (this->size != myArr.size) {
        return 0;
    }
    for (int i = 0; i < this->size; i++) {
        sum1 += this->arr[i];
    }
    for (int i = 0; i < myArr.size; i++) {
        sum2 += myArr.arr[i];
    }
    if (sum1 > sum2) {
        return true;
    }
    return false;
}

MyArray::~MyArray()
{
}
