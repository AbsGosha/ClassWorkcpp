#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	// задание 1 
	float num1, num2, num3;
	cout << "enter first number: ";
	cin >> num1;
	cout << "enter second number: ";
	cin >> num2;
	cout << "enter third number: ";
	cin >> num3;
	cout << num1 << " + " << num2 << " + " << num3 << " = " << num1 + num2 + num3 << endl;
	cout << num1 << " - " << num2 << " - " << num3 << " = " << num1 - num2 - num3 << endl;
	cout << float(num1) << " / " << float(num2) << " / " << float(num3) << " = " << float(num1) / float(num2) / float(num3) << endl;
	cout << num1 << " * " << num2 << " * " << num3 << " = " << num1 * num2 * num3 << endl;
	// задание 2 
	float size;
	float distance;
	float distance1;
	cout << "Введите масштаб карты: ";
	cin >> size;
	cout << "Введите расстояние между точками: ";
	cin >> distance;
	cout << "Введите расстояние между населенными пунктами: ";
	cin >> distance1;
	cout << "Масштаб карты (количество километров в одном сантиметре) -> " << size << endl;
	cout << "Расстояние между точками, изображающими населенные пункты (см) -> " << distance << endl;
	cout << "Расстояние между населенными пунктами " << distance1 << endl;
	// задание 3
	int number;
	cout << "Введите число: ";
	cin >> number;
	int x = number / 100;
	int y = (number / 10%10) * 10;
	int c = (number % 10) * 100;
	cout << x + y + c;
	// задание 4 
	cout << "Вычисление обьема параллелепипеда." << endl;
	cout << "Введите исходные данные: " << endl;
	int a, b;
	float c;
	cout << "Введите длину: " << endl;
	cin >> a;
	cout << "Введите ширину: " << endl;
	cin >> c;
	cout << "Введите высоту: " << endl;
	cin >> b;
	cout << "Длина (см) -> " << a << endl;
	cout << "Ширина (см) -> " << c << endl;
	cout << "Высота (см) -> " << b << endl;
	cout << "Обьем: " << a * c * b << "куб. см.";
	int num4;
	cout << "Введите 1-ое число: ";
	cin >> num4;
	int num5;
	cout << "Введите 2-ое число: ";
	cin >> num5;
	if (num4>num5) {
		cout << "1-ое число больше второго";
	}
	else {
		cout << "2-ое число больше первого" << endl;

	cout << ((num4 > num5) ? num4 : num5);
	// задание 5 
	int num6;
	cout << "Введите число: ";
	cin >> num6;
	if (num6 > 0) {
		cout << "Число положительное";

	}
	else if (num6 < 0) {
		cout << "Число отрицательное";

	}
	else if (num6 == 0) {
		cout << "Число равно нулю";
	}
	// задание 6
	int num7;
	int num8;
	cout << "Введите 1-ое число: ";
	cin >> num7;
	cout << "Введите 2-ое число: ";
	cin >> num8;
	if (num7 == num8) {
		cout << "Числа равны";
	}
	else if (num7 > num8) {
		cout << num7;
	}
	else if (num7 > num8) {
		cout << num8;
	}
	 //задание 7
	int average;
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	cout << "Введите 1-ую оценку: ";
	cin >> mark1;
	cout << "Введите 2-ую оценку: ";
	cin >> mark2;
	cout << "Введите 3-ью оценку: ";
	cin >> mark3;
	cout << "Введите 4-ую оценку: ";
	cin >> mark4;
	cout << "Введите 5-ую оценку: ";
	cin >> mark5;
	average = (mark1 + mark2 + mark3 + mark4 + mark5) % 5;
	if (average == 4) {
		cout << "Студент допущен к экзамену: ";
	}
	else if (average > 4) {
		cout << "Студент допущне к экзамену";
	}
	else if (average < 4) {
		cout << "Студент не допущен к экзамену" << endl;
	}
	// задание 8
	int num9;
	cout << "Введите число: ";
	cin >> num9;
	if (num9 % 2 == 0) {
		cout << num9 * 3;
	}
	else if (num9 % 2 == 1) {
		cout << num9 / 2.0 << endl;
	}
	// задание 3
	int num10;
	int num11;
	char action;
	cout << "Введите 1-ое число: ";
	cin >> num10;
	cout << "Введите действие: " ;
	cin >> action;
	cout << "Введите 2-ое число: ";
	cin >> num11;
	if (action == '+') {
		cout << num10 << "+" << num11 << "=" << num10 + num11;
	}
	else if (action == '-') {
		cout << num10 << "-" << num11 << "=" << num10 - num11;
	}
	else if (action == '/') {
		cout << num10 << "/" << num11 << "=" << num10 - num11;
	}
	else if (action == '*') {
		cout << num10 << "*" << num11 << "=" << num10 * num11;
	}
}