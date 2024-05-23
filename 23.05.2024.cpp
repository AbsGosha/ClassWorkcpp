#include <iostream>
using namespace std;
#define hi cout << "hello";
#define sum(a,b,c) a+b+c
#define min(a,b) cout << ((a < b)? a : b)
#define max(a,b) cout << ((a > b)? a : b)
#define sq(a) a*a
#define stp(a,b) for(int i = 1, k=a; i<b; i++, a*=k)
#define even(a) ((a%2)? "false" : "true")
#define odd(a) ((a%2)? "true" : "false") 
#define rand(a,b) a+rand()%(b+1-a)
#define maximum(a,b,c) if(a>b && a>c) cout << a; else if (b>c) cout << b; else cout << c;
void swa(char str[], int size) {
	for (int i = 0; i < size/2; i++) {
		swap(str[i], str[size - 1 - i]);
	}
}
/*void Show(char str[]) {
	char str[] = "qwerty142";
	cout << str;
}*/
//  как посчитать количество цифр в строке 
int digit(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') count++;
	}
	return count;
}
// как посчитать количество букв в строке 
int letter(char str[]) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 44 && str[i] <= 69 || str[i] >= 97 && str[i] <= 122){
			count++;
		}
	}
	return count;
}
int countWord(char str[]) {
	int count = 0;
	int k = 0;
	for (; str[k] == ' ' && str[k] != '\0'; k++);
	for (int i = k; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i+1] == '\0') {
			count++;
		}
		if (str[i] == ' ' && str[i+1] != ' ' && i!=0) {
			count++;
		}
	}
	return count;
}
int main()
{
	/*srand(time(NULL));
	hi;
	cout << endl;
	cout << sum(2, 4, 5);
	cout << endl;
	cout << sq(2);
	cout << endl;
	cout << even(4);
	cout << endl;
	int a = 2;
	stp(a, 5);
	cout << a;
	cout << endl;
	cout << odd(3);
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << rand(2, 10) << " ";
	}
	cout << endl;
	maximum(2, 3, 5);
	cout << endl;
	char str[6] = { 'q' , 'w', 'e', 'r', 't', 'y' };
	int SIZE = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < SIZE; i++) {
		cout << str[i];
	}
	char str[] = { 'q' , 'w', 'e', 'r', 't', 'y', '\0'};
	cout << str;
	cout << endl;
	char str1[] = "qwerty";
	cout << str1;
	cout << endl;
	// как перевернуть строку
	char str[] = "qwerty";
	for (int i = 6; i >= 0; i--) {
		cout << str[i];
	}
	//
	// как посчитать количество цифр в строке
	char str[] = "qwerty1h4h2";
	int count = 0;
	int SIZE = sizeof(str) / sizeof(str[0]);
	for (int i = 0; i < SIZE; i++) {
		if (str[i] >= 48 && str[i] <= 57) {
			count++;
		}
	}
	cout << count;
	//
	*/
	char str[] = "qwerty1h4h2";
	cout << digit(str);
	cout << endl;
	cout << letter(str);
	cout << endl;
	cout << countWord(str);

}

