#include "MyArray.h"

MyArray::MyArray(int* arr, int size, int length)
{
    this->arr = new int[size];
    this->size = size;
    this->length = length;
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
    for (int i = 0; i < this->size; i++) {
        cout << arr[i] << " ";
    }
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

bool MyArray::operator<(MyArray& myArr)
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
    if (sum1 < sum2) {
        return true;
    }
    return false;
}

bool MyArray::operator>=(MyArray& myArr)
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
    if (sum1 >= sum2) {
        return true;
    }
    return false;
}

bool MyArray::operator<=(MyArray& myArr)
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
    if (sum1 <= sum2) {
        return true;
    }
    return false;
}

MyArray MyArray::operator+=(MyArray& myArr)
{
    
}

MyArray::~MyArray()
{
}

// ШАБЛОНЫ

template <typename T>
MyArray<T>::MyArray() {
	this->size = 10;
	this->arr = new T[size];
}

template <typename T>
MyArray<T>::MyArray(T* arr, int size) {
	this->size = size;
	this->arr = new T[size];
	for (int i = 0; i < this->size; i++) {
		this->arr = arr[i];
	}
}

template <typename T>
MyArray<T> MyArray<T>::operator+(MyArray& myArr) {
	<T>* newArr = new <T>[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] + myArr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}

template <typename T>
MyArray<T> MyArray<T>::operator-(MyArray& myArr) {
	<T>* newArr = new <T>[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] - myArr[i];
	}
	return MyArray{newArr, this->size, 0};
}

template <typename T>
MyArray<T> MyArray<T>::operator*(MyArray& myArr) {
	<T>* newArr = new <T>[this->size];
	for (int i = 0; i < this->size; i++) {
		newArr[i] = this->arr[i] * myArr[i];
	}
	return MyArray{ newArr, this->size, 0 };
}



template <typename T>
MyArray<T>::~MyArray() {
}
