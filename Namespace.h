#pragma once
#include <iostream>
#define rand(a,b) a+rand()%(b+1-a)
namespace matrix {
	void cinArr(int** arr, int row, int column);
	int** memoryAllocation(int row, int col);
	void addRandom(int** arr, int row, int column);
	void print(int** arr, int row, int column);
	int* changeToArr(int** arr, int row, int column);
	void changeToMatrix(int* arr, int row, int column);
	void sum(int** arr, int row, int col, int** arr2, int row2, int col2);

	//void sortArr(int** arr, int row, int column);
}
