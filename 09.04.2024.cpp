//int size1 = _msize(arr) / sizeof(arr[0]); - количество строк 
//int size2 = _msize(arr[0]) / sizeof(arr[0][0]); - количество элементов в строке
#include <iostream>
using namespace std;
void showArr(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]); // количество строк 
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]); // количество элементов в строке
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void fillArr(int**& arr) {

	int SIZE1 = _msize(arr) / sizeof(arr[0]); // количество строк 
	int SIZE2 = _msize(arr[0]) / sizeof(arr[0][0]); // количество элементов в строке
	for (int i = 0; i < SIZE1; i++) {
		arr[i] = new int[SIZE2];
		for (int j = 0; j < SIZE2; j++) {
			arr[i][j] = 1 + rand() % 9;
		}
	}
}
void deleteStr(int**& arr, int n) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	//int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size1 - 1];
	for (int i = 0; i < n; i++) {
		buf[i] = arr[i];
	}
	for (int i = n + 1; i < size1; i++) {
		buf[i - 1] = arr[i];
	}
	delete[]arr[n];
	delete[]arr;
	arr = buf;
}
void deleteColumn(int**& arr, int n) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size1];
	for (int i = 0; i < size1; i++) {
		buf[i] = new int[size2 - 1];
		for (int j = 0; j < n; j++) {
			buf[i][j] = arr[i][j];
		}
		for (int j = n + 1; j < size2; j++) {
			buf[i][j - 1] = arr[i][j];
		}
	}
	for (int i = 0; i < size1; i++) {
		delete[]arr[i];
	}
	delete[] arr;
	arr = buf;
}
void appendArr(int**& arr, int** arr2) {
	int arrSize1 = _msize(arr) / sizeof(arr[0]);
	int arrSize2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int arr2Size1 = _msize(arr2) / sizeof(arr2[0]);

	int** buf = new int*[arrSize1 + arr2Size1];

	for (int i = 0; i < arrSize1; i++) {
		buf[i] = arr[i];
	}

	for (int i = arrSize1; i < arrSize1 + arrSize2; i++) {
		buf[i] = new int[arrSize2];
	}
	for (int i = arrSize1; i < arrSize1 + arr2Size1; i++) {
		for (int j = 0; j < arrSize2; j++) {
			buf[i][j] = arr2[i - arrSize1][j];
		}
	}
	delete[] arr;
	arr = buf;


}
int main()
{
	srand(time(NULL));
	const int SIZE1 = 3;
	const int SIZE2 = 4;
	const int SIZE3 = 5;
	const int SIZE4 = 4;
	int** arr = new int* [SIZE1];
	for (int i = 0; i < SIZE1; i++) {
		arr[i] = new int[SIZE2];
	}
	int** arr2 = new int* [SIZE3];
	for (int i = 0; i < SIZE3; i++) {
		arr2[i] = new int[SIZE4];
	}
	fillArr(arr);
	fillArr(arr2);

	showArr(arr);
	showArr(arr2);

	appendArr(arr, arr2);

	//showArr(arr);
	//showArr(arr2);
}
