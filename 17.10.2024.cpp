#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	//посчитать количество слов, начинающихся с символа, который задает пользователь
	//char symbol;
	//cin >> symbol;
	//int count = 0;
	//string line;
	//ifstream in("hello.txt");
	//if (in.is_open()) {
	//	while (in >> line) {
	//		if (line[0] == symbol)
	//			count++;
	//	}
	//}
	//in.close();
	//cout << count;
	// переписать в другой файл все его строки с заменой в них символа 0 на символ 1 и наоборот
	//string line;
	//ifstream in("input.txt");
	//ofstream out("output.txt");
	//if (out.is_open())
	//	while (in >> line) {
	//		for (int i = 0; i < line.length(); i++) {
	//			if (line[i] == '0') {
	//				line[i] = '1';
	//			}
	//			else if (line[i] == '1') {
	//				line[i] = '0';
	//			}
	//		}
	//		out << line;
	//	}
	//in.close();
	//out.close();
	// как посчитать количество строк в файле
	/*char buf[256];
	int count = 0;
	ifstream in("input1.txt");
	if (in.is_open()) {
		while (in.getline(buf, 256)) {
			count++;
		}
	}
	in.close();
	cout << count;*/
	// как посчитать количество символов в файле
	/*string line;
	int count = 0;
	ifstream in("input2.txt");
	if (in.is_open()) {
		while (in >> line) {
			count+=line.length();
		}
	}
	in.close();
	cout << count;*/
	// как посчитать количество слов в строке 
	/*string line;
	int count = 0;
	ifstream in("input3.txt");
	if (in.is_open()) {
		while (in >> line) {
			count++;
		}
	}
	in.close();
	cout << count;*/
	// 
	string line;
	ifstream in("zapret.txt");
	string* bad_word = new string[10];
	if (in.is_open()) {
		int num = 0;
		while (in >> line) {
			bad_word[num] = line;
			num++;
		}
	}
	in.close();
	int count = 0;
	ifstream in1("start_file.txt");
	ofstream out("without_zapret.txt");
	if (in1.is_open()) {
		while (in1 >> line) {
			if (out.is_open()) {
				for (int i = 0; i < 10; i++) {
					if (line == bad_word[i]) {
						count++;
					}
				}
			}
		}
	}
	in.close();
	out.close();
	cout << count;
}
