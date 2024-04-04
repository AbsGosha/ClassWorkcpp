
#include <iostream>
using namespace std;
void showArr(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
// удаление строки в двумерном динамичсеком массиве
void deleteStr(int**& array, int n) {
	int size1 = _msize(array) / sizeof(array[0]);
	int** buf = new int*[size1 - 1];
	for (int i = 0; i < n; i++) {
		buf[i] = array[i];
	}
	for (int i = n + 1; i < size1; i++) {
		buf[i - 1] = array[i];
	}
	delete[]array[n];
	delete[]array;
	array = buf;
}
// удпаление столбцов в двумерном динамичсеком массиве
void deleteColumn(int**& array, int n) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int [size2 - 1];
		for (int j = 0; j < n; j++) {
			buf[i][j] = array[i][j];
		}
		for (int j = n + 1; j < size2; j++) {
			buf[i][j - 1] = array[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		delete[]array[i];
	}
	delete[] array;
	array = buf;
}
// 
int main()
{
	// как создается одномерный динамический массив
	int* array = new int[3]{1,2,3};
	// как создается двумерный динамический массив
	int** array = new int* [2];
	int** students = new int* [25];
	for (int i = 0; i < 25; i++) {
		students[i] = new int[10];
	}
	srand(time(NULL));
	int** array = new int* [7];
	for (int i = 0; i < 7; i++) {
		array[i] = new int[8];
		for (int j = 0; j < 8; j++) {
			array[i][j] = 10 + rand() % 90;
		}
	}
	showArr(array);
	cout << endl;
	deleteArr(array, 2);
	cout << endl;
	showArr(array);
	showArr(array);
	deleteColumn(array, 2);
	cout << endl;
	showArr(array);
}