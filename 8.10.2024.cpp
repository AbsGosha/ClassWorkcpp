#include <iostream>
using namespace std;
#define random(a, b) a + rand() % (b - a + 1)
//void showArr(int**& arr) {
//	int size1 = _msize(arr) / sizeof(arr[0]);
//	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
//	for (int i = 0; i < size1; i++) {
//		for (int j = 0; j < size2; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//union MyUnion
//{
//	int number;
//	unsigned char bytes[4];
//	void num() {
//		cout << "Enter number: ";
//		cin >> number;
//	}
//};
//struct MyStruct
//{
//	void showArray(int* array) {
//		int size1 = _msize(array) / sizeof(array[0]);
//		for (int i = 0; i <= size1; i++) {
//			array[i] = random(1, 10);
//		}
//}
//};
typedef struct Coordinate {
	int x;
	int y;
	float formula(Coordinate a) {
		return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
	}
};
float func(Coordinate a, Coordinate b) {
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
struct Calculator {
	float a;
	float b;
	void enterNum() {
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
	}
	float operation() {
		char oper;
		cout << "Enter operation: ";
		cin >> oper;
		switch (oper) {
		case '+':
			return sum();
			break;
		case '-':
			return minus();
			break;
		case '*':
			return mult();
			break;
		case '/':
			return div();
			break;
		default:
			cout << "Error!";
			break;
		}
	}
	float sum() {
		return a+b;
	}
	float minus() {
		return a-b;
	}
	float div() {
		return a/b;
	}
	float mult() {
		return a*b;
	}
};
int main()
{
	/*srand(time(NULL));
	int** arr = new int* [6];
	for (int i = 0; i < 6; i++) {
		arr[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 1 + rand() & 5;
		}
	}
	showArr(arr);*/
	Calculator calc;
	calc.enterNum();
	cout << calc.operation();
	Coordinate coord;
	coord.formula();
	cout << 



}
