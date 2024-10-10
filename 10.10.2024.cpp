#include <iostream>
using namespace std;
union Myunion {
	int num;
	unsigned char arr[4];

	void number() {
		cin >> num;
	}

	void printNum() {
		cout << num;
	}
	// просмотреть выбранный байт числа
	void printByte(int a) {
		cout << int(arr[a]);
	}
	// вывод байтов числа в двоичном и шестнадцатиричном виде 
	void printBytes() {
		for (int i = 0; i < sizeof(arr); i++) {
			printf("%x", arr[i]);
		}
	}
	/*void bytes() {
		for (int i = 0; i < sizeof(arr); i++) {
			cout << int(arr[i]);
		}
	}*/
	void showAllBytes(int a) {
		cout << a;
	}
};
union MyUnion2 {
	int num;
	void number() {
		cin >> num;
	}

};
int main()
{
	Myunion function;
	/*function.number();
	function.printNum();
	cout << endl;
	function.printByte(3);
	function.printBytes();
	cout << endl;*/
	//function.bytes();
	function.showAllBytes(5);
}