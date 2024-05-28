#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int StrinFile(string str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}
int countWord(string str) { // как посчитать количство слов в строке
	string buf;
	int count = 0;
	int k = 0;
	for (; str[k] == ' ' && str[k] != '\0'; k++);
	for (int i = k; str[i] != '\0'; i++) {
		if (str[i] != ' ' && str[i + 1] == '\0') count++;
		if (str[i] == ' ' && str[i + 1] != ' ') count++;
		}
	return count;
}
int countWordinFile(string path) { // как посчитать количство слов в строке
	string buf;
	int count = 0;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, buf)) { // считывает строчку и записывает в buf
			count += countWord(buf);
		}
	}
	in.close(); // закртыие потока
	return count;
}
/*int countSameWordsinFile(string path, string word) { // как посчитать количество одинаковых слов в строке
	ifstream in(path);
	int count = 0;
	ifstream in(path);
	if (in.is_open()) {
		while (getline(in, path)) {
			for (int i = 0; path[i] != '\0'; i++) {
				if (path[i] == word[0]) {
					for(int j = 0; j )
				}
			}
		}
	}
}*/
void copyFile(string path1, string path2) {
	ifstream in(path1);
	ofstream  out(path2);
	string buf;
	if (in.is_open()) {
		while (getline(in, path1)) {
			buf += path1;
			buf += "\n";
		}
	}
	in.close();
	out.close();
}
void Copy(string path) {
	string path2 = " ";
	for (int i = 0; i < path.length() - 4; i++) {
		path2 += path[i];
	}
	path += "(copy).txt";
	cout << path2;
	string buf;
	string result = " ";
	ifstream in(path);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, buf)) {
			result += buf + "\n";
		}
	}
	in.close();
	out.close();
}
int main()
{

	//string path = "resouurces\\ss.txt";
	//cout << countWordinFile(path);
	//как добавлять данные в папку (папка создается сама)
	//ofstream  out("resouurces\\ss2.txt"); // как создается папка
	//out << "ghfkjgndkljf\ghnew tgn tk\tigj"; // заполнение данных
	//out.close();
	
	//ifstream in(str); // поток на вход (на получение данных)
	//ofstream out (str); // поток на выход (на отправление данных)
	//функция -getline- проходит по строчке
	ofstream out("resouurces\\ss2.txt");
	string path = "resouurces\\ss.txt";
	out.close();
	copyFile(path, "abcd");
}