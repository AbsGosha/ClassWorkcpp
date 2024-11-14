#pragma once
#include <iostream>
using namespace std;
template <typename T>
class MyArray
{
private:
	int* arr;
	int size;
	int length;
	T* arr;
	int size;
public:
	MyArray(int* arr, int size, int length);
	int* getArr();
	int getSize();
	int getLength();
	void print();
	bool operator>(MyArray& myArr);
	bool operator<(MyArray& myArr);
	bool operator>=(MyArray& myArr);
	bool operator<=(MyArray& myArr);
	MyArray operator+=(MyArray&); // äîäåëàòü
	~MyArray();
	
	//ШАБЛОНЫ

	MyArray();
	MyArray(T* arr, int size);
	MyArray<T> operator+(MyArray<T>&  myArr);
	MyArray<T> operator-(MyArray<T>& myArr);
	MyArray<T> operator*(MyArray<T>& myArr);
	~MyArray();
	

};

