#pragma once
#include <iostream>
using namespace std;
template <typename T>
class MyArr
{
private:
	int* arr;
	int size;
	int length;
public:
	MyArr();
	MyArr(T* arr, int size, int length);
	int getSize();
	void setSize(int, int);
	int isEmpty();
	int getUpperBound();
	void print();
	~MyArr();
};

template<typename T>
inline MyArr<T>::MyArr()
{
}

template<typename T>
inline MyArr<T>::MyArr(T* arr, int size, int length)
{
	this->arr = new int[size];
	this->size = size;
	this->length = 0;
	for (int i = 0; i < size; i++) {
		this->arr[i] = arr[i];
	}
}

template <typename T>
inline int MyArr<T>::getSize()
{
	return this->size;
}


template <typename T>
inline void MyArr<T>::setSize(int size, int grow)
{
	this->size = size;
	this->grow = grow;
}

template<typename T>
inline int MyArr<T>::isEmpty()
{
	return length == 0;
}

template<typename T>
inline int MyArr<T>::getUpperBound()
{
	return this->length-1;
}

template<typename T>
inline void MyArr<T>::print()
{
	for (int i = 0; i < this->size; i++)
	{
		cout << this->arr[i];
	}
}



template <typename T>
inline MyArr<T>::~MyArr()
{

}
