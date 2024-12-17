#include <iostream>
#include "Namespace.h"
using namespace std;
int main()
{
	int row = 3, col = 3;
	int row1 = 5, col1 = 5;
	/*int** test = matrix::newMemory(row, column)*/;
	/*matrix::print(test,row, column);
	matrix::cinArr(test,row, column);
	matrix:addRandom(test,row, column);
	matrix::changeToArr(test,row, column);
	matrix::print(test,row, column);
	matrix::changeToMatrix(test, row, column);*/
	int** test = matrix::memoryAllocation(row, col);
	int** test1 = matrix::memoryAllocation(row1, col1);
	//matrix::cinArr(test, row, col);
	matrix::print(test, row, col);
	cout << endl;
	try {
		matrix::sum(test, row, col, test1, row1, col1);
	}
	catch (const char* ex)
	{
		cout << ex << endl;
	}
	matrix::print(test, row, col);

}
