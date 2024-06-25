#include <iostream>
using namespace std;
void init(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = 10 + rand() % 99;
		}
		cout << endl;
	}
}
void deleteStr(int**& arr, int n) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size2-1];
	for (int i = 0; i < n; i++) {
		buf[i] = arr[i];
	}
	for (int i = n + 1; i < size1; i++) {
		buf[i - 1] = arr[i];
	}
	delete[] arr;
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
		delete[] arr[i];
	}
	delete[] arr;
	arr = buf;
}
int* returnInd(int** arr, int n) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int* buf = new int[2];
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] == n) {
				buf[0] = i;
				buf[1] = j;
			}
		}
	}
	return buf;
}
void swapElem(int** arr, int a, int b) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] == a) {
				arr[i][j] = b;
			}
		}
	}
}

int main()
{
	

}