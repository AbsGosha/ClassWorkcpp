#include "Namespace.h"
#include <iostream>
using namespace std;
void matrix::cinArr(int** arr, int row, int column)
{
	for (int i = 0; i < row; i++) {
		/*arr[i] = new int[2];*/
		for (int j = 0; j < column; j++) {
			std::cin >> arr[i][j];
		}
	}

}

int** matrix::memoryAllocation(int row, int col)
{
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	return arr;
}
//
//void matrix::newMemory(int** arr, int row, int column)
//{
//	arr = new int* [row];
//	for (int i = 0; i < column; i++) {
//		for (int j = 0; j < row; j++) {
//		}
//	}
//}

void matrix::addRandom(int** arr, int row, int column)
{
	arr = new int* [row];
	for (int i = 0; i < column; i++) {
		/*arr[i] = new int[size2];*/
		for (int j = 0; j < row; j++) {
			arr[i][j] = rand(1,100);
		}
		std::cout << "\n";
	}
}

void matrix::print(int** arr, int row, int column)
{
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

int* matrix::changeToArr(int** arr, int row, int column)
{
	int* result = new int[row * column];
	int n = 0;
	int arr1[5][5];
	int arr2[5 * 5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr2[n] = arr1[i][j];
			std::cout << arr2[n] << " ";
			n++;
		}
	}
	std::cout << "\n";
	return result;
}

void matrix::changeToMatrix(int* arr, int row, int column)
{
	int** arr2 = new int* [row];
	for (int i = 0; i < row; i++) {
		arr2[i] = new int[column];
		for (int j = 0; j < column; j++) {
			arr2[i][j] = arr[i * column + j];
		}
	}
}

//void matrix::sortArr(int** arr, int row, int column)
//{
//	int n = 0;
//	int arr1[5][5];
//	int arr2[5 * 5];
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr2[n] = arr1[i][j];
//			std::cout << arr2[n] << " ";
//			n++;
//		}
//	}
//	std::cout << "\n";
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (arr[i] < arr[j]) {
//				swap(arr[i], arr[j]);
//				count++;
//			}
//		}
//	}
void matrix::sum(int** arr, int row, int col, int** arr2, int row2, int col2)
{
	if (row != row2 || col != col2) {
			throw "Error!";
		return;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] += arr2[i][j];
		}
	}
}
