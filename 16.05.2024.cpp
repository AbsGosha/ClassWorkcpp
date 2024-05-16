
#include <iostream>
using namespace std;
int main()
{
	/* //
	int a = 4;
	cout << a; // 4
	cout << &a; // F0
	int& la = a;// теперь к значанию ячейки F0 мы можем обращаться используя 'a' или 'la'
	la += 2;// a=6, la=6
	int* pa = &a;
	cout << pa; // выведется адрес F0
	cout << *pa; // выведется 4
	cout << &pa; // С0 - адрес указателя 

	//
	int *array = new int[4]{ 1,2,3,4 };

	//
	cout << sizeof(array); // 8 - размер памяти занимаемы указателем
	cout << _msize(array); // 16 - каждый элемент занимает 4 всего элементов 4 = 16, общий размер занимаемый массивом 
	cout << sizeof(array[0]); // 4  размер памяти занимаемый одним значением массива 
	int size = _msize(array) / sizeof(array[0]); // количество элменетов в массиве

	// как добавлять элемент в конец массива 
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = array[i];
	}
	buf[size] = 23; //  добавление нового значения
	delete[]array;
	array = buf;

	// как удалять элемент с конца 
	int* buf = new int[size - 1];
	for (int i = 0; i < size-1; i++) {
		buf[i] = array[i];
	}
	delete[]array;
	array = buf;
	*/
	// как удалять несколько элементов в конце массива 
	srand(time(NULL));
	/*int* arr = new int[10];
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		arr[i] = 1 + rand() % 9;
		cout << arr[i] << " ";
	}
	cout << endl;
	int* buf = new int[10 - n];
	for (int i = 0; i < (10 - n); i++) {
		buf[i] = arr[i];
		cout << buf[i] << " ";
	}
	// 
	int* arr = new int[10];
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % 9;
		cout << arr[i] << " ";
	}
	cout << endl;
	int count = 4;
	int index = 3;
	int* buf = new int[size - count];
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	for (int i = index + count; i < size; i++) {
		buf[i - count] = arr[i];
	}
	delete[] arr;
	arr = buf;
	int size2 = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size2; i++) {
		cout << arr[i] << " ";
	}
	// как создается двумерный динамический массив 
	int** arr = new int* [3];
	for (int i = 0; i < 3; i++) {
		arr[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			arr[i][j] = 1 + rand() % 9;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/
	// добавление строки в двумерном динамическом массиве 
	int** array = new int* [3];
	for (int i = 0; i < 3; i++) {
		array[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			array[i][j] = 1 + rand() % 9;
		}
	}
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array[0]) / sizeof(array[0][0]);
	int* arr2 = new int[2]{ 4,7 };
	int** buf = new int* [size1 + 1];
	for (int i = 0; i < size1; i++) {
		buf[i] = array[i];
	}
	buf[size1] = arr2;
	delete[]array;
	array = buf;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
		
}
