

#include <iostream>
using namespace std;
void showArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}
void showMinarr(int array[], int size) {
	int min = array[0];
	int minIndex = 0;
	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
			minIndex = i;
		}
	}
	cout << min;
	cout << endl;
	cout << minIndex;
}
void showCopyarr(int array1[], int array2[], int size) {
	for (int i = 0; i < size; i++) {
		array2[i] = array1[i];
	}
	cout << endl;
}
void showSumArr(int array[], int size) {
	float sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
		count++;
	}
	cout << sum / count;
}
void fillArray(int array[], int size, int min = 0, int max = 9) {
	for (int i = 0; i < size; i++) {
		array[i] = min + rand() % (max+1-min);
	}
}
void cope(int array1[], int size1, int array2[], int size2) {
	if (size1 > size2) {
		for (int i = 0; i < size2; i++) {
			array2[i] = array1[i];
		}
	}
	else {
		for (int i = 0; i < size1; i++) {
			array2[i] = array1[i];
		}
		for (int i = 0; i < size1; i++) {
			array2[i] = 0;
		}
	}
}
void ChangeArray(int array1[], int size1, int array2[], int size2) {
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (array1[i] == array2[j])
				array2[i] = 0;
			break;
		}
	}
}


int main()
{
	int array[] = {3,2,1,9,5,7};
	int size = sizeof(array) / sizeof(array[0]);
	showArray(array, size);
	cout << endl;
	showMinarr(array, size); 
	cout << endl;
	//showCopyarr(array1, array2, size);
	showSumArr(array, size);
	int array1[10];
	int array2[15];
	int array3[5];
	fillArray(array1, 10);
	fillArray(array2, 15);
	fillArray(array3, 5);
	cout << endl;
	showArray(array1, 10);
	showArray(array2, 15);
	showArray(array3, 5);
	cout << endl;
	cope(array1, 10, array2, 15);
	cout << endl;
	showArray(array1, 10);
	showArray(array2, 15);
	cout << endl;
	cope(array1, 10, array3, 5);
	cout << endl;
	showArray(array3, 5);
	ChangeArray(array1, 10, array3, 5);
	showArray(array3, 5);
	char field[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == j % 2) {
				field[i][j] = 219;
			}
			else {
				field[i][j] = ' ';
			}
		}
	}
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	field[num1][num2] = '@';
	for (int i = num1 - 1, j = num2 - 1; i >= 0 && j >= 0; i--, j--) {
		field[i][j] = '*';
	}
	for (int i = num1 + 1, j = num2 + 1; i <= 7 && j <= 7 ; i++, j++) {
		field[i][j] = '*';
	}
	for (int i = num1 + 1, j = num2 - 1; i <= 7 && j >= 0; i++, j--) {
		field[i][j] = '*';
	}
	for (int i = num1 - 1, j = num2 + 1; i >= 0 && j <= 7; i--, j++) {
		field[i][j] = '*';
	}
	cout << "  a b c d e f g h" << endl;
	for (int i = 0; i < 8; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i][j] << field[i][j];
		}
		cout << endl;
	}

	
	

}


