#pragma once
#include <iostream>
using namespace std;
srand(time(NULL));
class Array
{
private:
	int size;
	int* arr;
public:
	void showArrray(int size);
	void addNum();
	void sortArray();
	void minNumInArr();
	void maxNumInArr();
	~Array();
};

