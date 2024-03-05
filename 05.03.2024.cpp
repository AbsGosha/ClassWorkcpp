

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	// задание 1
	int num1, num2, num3, num4, num5, num6, num7, num8, num9;
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9;
	int max = num1;
	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 >max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}
	if (num6 > max) {
		max = num6;
	}
	if (num7 > max) {
		max = num7;
	}
	if (num8 > max) {
		max = num8;
	}
	if (num9 > max) {
		max = num9;
	}
	cout << max;

	const int size = 5;
	int array[size];
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << " " << endl;

	}
	int max = array[0];
	for (int i = 1; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}

	}
	cout << max;
	// задание 2
	const int size1 = 5;
	int array[size1];
	for (int i = 0; i < size1; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < size1; i++) {
		cout << array[i] << " " << endl;
	}
	int min = 0;
	for (int i = 1; i < size1; i++) {
		if (array[min] > array[i]) {
			min = array[i];
		}
	}
	cout << min;
	// задание 3
	const int size2 = 5;
	int array[size2];
	for (int i = 0; i < size2; i++) {
		cin >> array[i];
	}
	cout << endl;
	for (int i = 0; i < size2; i++) {
		cout << array[i] << " " << endl;
	}
	int sum = 0;
	for (int i = 0; i < size2; i++) {
		sum += array[i];
	}
	cout << sum;
	// задание 4
	const int size3 = 5;
	int array[size3];
	for (int i = 0; i < size3; i++) {
		cin >> array[i];
	}
	cout << endl;
	for (int i = 0; i < size3; i++) {
		cout << array[i] << " " << endl;
	}
	for (int i = size3 - 1; i >= 0; i--) {
		cout << array[i] << " ";
	}
	// задание 5 
	srand(time(NULL));
	int num = 0;
	int min = 10;
	int max = 99;
	const int size4 = 10;
	int array[size4];
	for (int i = 0; i < size4; i++) {
		array[i] = 10 + rand() % (90);
		cout << array[i] << " " << endl;
	}
	int sum = 0;
	for (int i = 0; i < size4; i++) {
		sum += array[i];
	}
	cout << "Среднее арифмитическое: " << sum << endl;
	for (int i = 0; i < size4; i++) {
		if (array[i] % 5 == 0) {
			num = i;
			cout << "Индекс первого встречного элемента который кратен 5: " << i << endl;
			break;
		}
	}
	int sum1 = 0;
	for (int i = 0; i < size4; i++) {
		sum1 += array[i];
		if (sum1 % 2 == 0) {
		}
	}
	cout << "Сумма элеметов массива четная" << endl;
	array[9] = 0;
	for (int i = 0; i < size4; i++) {
		if ((array[i] + array[i] + 1) % 10 == 0) {
			cout << i;
		}
	}





}




	














