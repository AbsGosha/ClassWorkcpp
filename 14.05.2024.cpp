
#include <iostream>
using namespace std;
int main()
{
	//
	/*int num1;
	int num2;
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	if (num1 > num2) {
		swap(num1, num2);
	}
	for (int i = num1; i <= num2; i++) {
		if (i % 2 == 0){
			cout << i << " ";
		}
	}
	cout << endl;
	//
	int num3;
	int num4;
	int sum = 0;
	cout << "Input first number: ";
	cin >> num3;
	cout << "Input second number: ";
	cin >> num4;
	if (num3 > num4) {
		swap(num3, num4);
	}
	for (int i = num3; i <= num4; i++) {
		if (sum % 5 == 0) {
			sum += i;
		}
	}
	cout << sum;
	int size;
	cout << "Input size: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	*/
	// заполнение одномерного массива рандомными значениями в заданном пользователем диапазоне 
	/*srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE] = {};
	int num1;
	int num2;
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	if (num1 > num2) {
		swap(num1, num2);
	}
	for (int i = 0; i < SIZE; i++) {
		arr[i] = num1 + rand() % (num2+1-num1);
		cout << arr[i] << " ";
	}
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE] = {};
	int num1;
	int num2;
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	if (num1 > num2) {
		swap(num1, num2);
	}
	for (int i = 0; i < SIZE; i++) {
		arr[i] = num1 + rand() % (num2 + 1 - num1);
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < SIZE / 2; i++) {
		swap(arr[i], arr[SIZE - 1 - i]);
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE] = {};
	int num1;
	int num2;
	cout << "Input first number: ";
	cin >> num1;
	cout << "Input second number: ";
	cin >> num2;
	if (num1 > num2) {
		swap(num1, num2);
	}
	for (int i = 0; i < SIZE; i++) {
		arr[i] = num1 + rand() % (num2 + 1 - num1);
		cout << arr[i] << " ";
	}
	cout << endl;
	int ind = 0;
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < arr[ind]) {
			ind = i;
		}
	}
	cout << ind;
	//
	srand(time(NULL));
	const int SIZE1 = 5;
	const int SIZE2 = 8;
	int arr[SIZE1][SIZE2] = {};
	for (int i = 0; i < SIZE1; i++) {
		for(int j = 0; j < SIZE2; j++){
			arr[i][j] = 2 + rand() % 4;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	srand(time(NULL));
	/*
	const int SIZE1 = 5;
	const int SIZE2 = 8;
	int arr[SIZE1][SIZE2] = {};
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			arr[i][j] = 2 + rand() % 4;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int sum = 0;
	int sumMin = 0;
	int sumMax = 0;
	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			sumMin += arr[i][j];

		}
	}*/
	srand(time(NULL));
 
 
	const int STR = 4;
	const int COLUMN = 3;
	int arr[STR][COLUMN]{};
	int sumAll = 0;
 
	for (int i = 0; i < STR; i++) {
		for (int j = 0; j < COLUMN; j++) {
			arr[i][j] = 1 + rand() % 9;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
 
	for (int i = 0, sum; i < STR; i++) {
		sum = 0;
		for (int j = 0; j < COLUMN; j++) {
			cout << arr[i][j] << "\t";
			sum += arr[i][j];
		}
		cout << "| " << sum;
		sumAll += sum;
		cout << endl;
	}
 
	for (int j = 0, sum; j < COLUMN; j++) {
		sum = 0;
		for (int i = 0; i < STR; i++) {
			sum += arr[i][j];
		}
		cout << sum << "\t";
	}
 
 
	cout << "| " << sumAll;
}