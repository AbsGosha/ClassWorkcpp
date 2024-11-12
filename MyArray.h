#pragma once
#include <iostream>
using namespace std;
class MyArray
{
private:
	int* arr;
	int size;
	int length;
public:
	MyArray(int* arr, int size, int length);
	int* getArr();
	int getSize();
	int getLength();
	void print();
	MyArray operator+(MyArray& myArr);
	MyArray operator-(MyArray& myArr);
	MyArray operator*(MyArray& myArr);
	MyArray operator/(MyArray& myArr);
	bool operator==(MyArray& myArr);
	bool operator!=(MyArray& myArr);
	bool operator>(MyArray& myArr);
	~MyArray();

};

