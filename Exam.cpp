#include <iostream>
using namespace std;
#define random(a, b) a + rand() % (b - a + 1)
void Row(int ind) {
	int arr[3] = { 1,2,3 };
	int n = 0;
	int** buf = new int* [4];
	for (int i = 0; i < 4; i++) {
		buf[i] = new int [4];
		for (int j = 0; j < 3; j++) {
			buf[i][j] = random(1, 10);
		}
	}
	int** buf2 = new int* [4];
	for (int i = 0; i < 4; i++) {
		buf2[i] = new int[3];
		for (int j = 0; j < ind; j++) {
			buf2[i][j] = buf[i][j];
		}
		buf2[i][ind] = n++;
		for (int j = ind + 1; j < 4; j++) {
			buf2[i][j+1] = buf[i][j];
		}
	}
	delete[] buf;
	buf = buf2;
}
int main()
{
	// задание 1
	int num1, num2, num3, num4;
	cout << "Enter number: ";
	cin >> num1 >> num2 >> num3 >> num4;
	int min_num = num1;
	if (num2 < num1) {
		min_num = num2;
	}
	if (num3 < num2) {
		min_num = num3;
	}
	if (num4 < num3) {
		min_num = num4;
	}
	cout << "Min number: " << min_num;
	cout << endl;
	// задание 2
	for (int i = 0; i > -25; i-=3) {
		cout << i << " ";
	}
	cout << endl;
	// задание 3
	int size;
	cout << "Enter size: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = size - i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
	 //задание 4
	float num;
	float n = 0;
	float sum = 0;
	while (true) {
		cout << "Enter number: ";
		cin >> num;
		if (num == 0) {
			cout  << sum / n++;
			break;
		}
		sum += num;
		n++;
	}
	 //задание 5
	srand(time(NULL));
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = random(10, 90);
		cout << array[i];
	}
	 задание 6
	int num = INT_FAST32_MAX;
	int sum = 0;
	int n = 1;
	int** array = new int* [4];
	for (int i = 0; i < 4; i++) {
		array[i] = new int[4];
		for (int j = 0; j < 4; j++) {
			array[i][j] = random(1, 9);
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < n; j++) {
			sum += array[i][j];
		}

	}
	// задание 9
	int** array = new int* [3];
	int* array2 = new int[3]{ 1,2,3 };
	for (int i = 0; i < 3; i++) {
		array[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			array[i][j] = random(1, 10);
		}
	}
	 //задание 6 
	srand(time(NULL));
	int size1 = 4;
	int size2 = 5;
	int min;
	int max;
	cin >> min;
	cin >> max;
	int** arr = new int* [size1];
	int sum = 0;
	int num = 0;
	for (int i = 0; i < size1; i++) {
		arr[i] = new int[size1];
		for (int j = 0; j < size2; j++) {
			arr[i][j] = random(min, max);
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			sum += arr[i][j];
		}
	}
	cout << "Sum: " << sum << " Num: " << num;
}
