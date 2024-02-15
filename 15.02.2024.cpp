
#include <iostream>
using namespace std;
int main()
{	
	setlocale(LC_ALL, "rus");
	//float num1, num2, num3;
	//cout << "enter first number: ";
	//cin >> num1;
	//cout << "enter second number: ";
	//cin >> num2;
	//cout << "enter third number: ";
	//cin >> num3;
	//cout << num1 << " + " << num2 << " + " << num3 << " = " << num1 + num2 + num3 << endl;
	//cout << num1 << " - " << num2 << " - " << num3 << " = " << num1 - num2 - num3 << endl;
	//cout << float(num1) << " / " << float(num2) << " / " << float(num3) << " = " << float(num1) / float(num2) / float(num3) << endl;
	//cout << num1 << " * " << num2 << " * " << num3 << " = " << num1 * num2 * num3 << endl;
	//float size;
	//float distance;
	//float distance1;
	//cout << "Введите масштаб карты: ";
	//cin >> size;
	//cout << "Введите расстояние между точками: ";
	//cin >> distance;
	//cout << "Введите расстояние между населенными пунктами: ";
	//cin >> distance1;
	//cout << "Масштаб карты (количество километров в одном сантиметре) -> " << size << endl;
	//cout << "Расстояние между точками, изображающими населенные пункты (см) -> " << distance << endl;
	//cout << "Расстояние между населенными пунктами " << distance1 << endl;
	//int number;
	//cout << "Введите число: ";
	//cin >> number;
	//int x = number / 100;
	//int y = (number / 10%10) * 10;
	//int c = (number % 10) * 100;
	//cout << x + y + c;
	//cout << "Вычисление обьема параллелепипеда." << endl;
	//cout << "Введите исходные данные: " << endl;
	//int a, b;
	//float c;
	//cout << "Введите длину: " << endl;
	//cin >> a;
	//cout << "Введите ширину: " << endl;
	//cin >> c;
	//cout << "Введите высоту: " << endl;
	//cin >> b;
	//cout << "Длина (см) -> " << a << endl;
	//cout << "Ширина (см) -> " << c << endl;
	//cout << "Высота (см) -> " << b << endl;
	//cout << "Обьем: " << a * c * b << "куб. см.";
	//int num1;
	//cout << "Введите 1-ое число: ";
	//cin >> num1;
	//int num2;
	//cout << "Введите 2-ое число: ";
	//cin >> num2;
	//if (num1>num2) {
	//	cout << "1-ое число больше второго";
	//}
	//else {
		//cout << "2-ое число больше первого" << endl;
		
	//}

	//cout << ((num1 > num2) ? num1 : num2);
	
	//int num1;
	//cout << "Введите число: ";
	//cin >> num1;
	//if (num1 > 0) {
		//cout << "Число положительное";

	//}
	//else if (num1 < 0) {
		//cout << "Число отрицательное";

	//}
	//else if (num1 == 0) {
		//cout << "Число равно нулю";
	//}
	//int num1;
	//int num2;
	//cout << "Введите 1-ое число: ";
	//cin >> num1;
	//cout << "Введите 2-ое число: ";
	//cin >> num2;
	//if (num1 == num2) {
		//cout << "Числа равны";
	//}
	//else if (num1 > num2) {
		//cout << num1;
	//}
	//else if (num2 > num1) {
		//cout << num2;
	//}
	// задание 1 
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
	average = (mark1 + mark2 + mark3 + mark4 + mark5)%5;
	if (average == 4) {
		cout << "Студент допущен к экзамену: ";
	}
	else if (average > 4) {
		cout << "Студент допущне к экзамену";
	}
	else if (average < 4) {
		cout << "Студент не допущен к экзамену" << endl;
	}
	// задание 2 
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << num * 3;
	}
	else if (num%2==1) {
		cout << num / 2.0 << endl;
	}
	// задание 3
	int num5;
	int num6;
	char action;
	cout << "Введите 1-ое число: ";
	cin >> num5;
	cout << "Введите действие число: ";
	cin >> action;
	cout << "Введите 2-ое число: ";
	cin >> num6;
	if (action == '+') {
		cout << num5 << "+" << num6 << "=" << num5+num6;
	}
	else if (action == '-') {
		cout << num5 << "-" << num6 << "=" << num5-num6;
	}
	else if (action == '/') {
		cout << num5 << "/" << num6 << "=" << num5-num6;
	}
	else if (action == '*') {
		cout << num5 << "*" << num6 << "=" << num5*num6;
	}
}
