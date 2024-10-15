#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	// fstream - работает на запись и на чтение (с файла из файла)
	// ofstream - работает на запись в файл 
	// fstream - работает на чтение из файла
	// переписать слово из одного файла в другой 
	/*string line;
	ifstream in("hello.txt");
	ofstream out("out.txt");
	if (in.is_open()) {
		while ((in >> line)) {
			if (out.is_open())
			{
				out << line;
			}
		}
	}
	out.close();
	in.close();*/

	//переписать слово из одного файла в другой чтобы оно сохрианялось после закрытия файла 
	/*string line;
	ifstream in("hello.txt");
	ofstream out("out.txt", ios::app);
	if (in.is_open()) {
		while ((in >> line)) {
			if (out.is_open())
			{
				out << line;
			}
		}
	}
	out.close();
	in.close();*/
	// записать из дного файла в другой слова больше чем 7 букв 
	/*string line;
	ifstream in("input.txt");
	ofstream out("output.txt");
	if (out.is_open()) {
		if (in.is_open()) {
			while (in >> line) {
				if (line.length() >= 7) {
					out << line << " ";
				}
			}
		}
	}
	out.close();
	in.close();*/
	// переписать все строки из одного файла в другой 
	/*string line;
	ifstream in("input1.txt");
	ofstream out("output1.txt");
	if (in.is_open()) {
		while ((in >> line)) {
			if (out.is_open())
			{
				out << line << endl;
			}
		}
	}
	out.close();
	in.close();*/
	//
	//string line;
	//ifstream in("real.txt");
	//ofstream out("clone.txt");
	//if (in.is_open()) {
	//	while ((in >> line)) {
	//		//out.seekp
	//	}
	//}


	
}
