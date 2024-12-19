#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//вывод контейнера через foreach
	/*vector<int> v = { 1,2,3,4 };
	for (auto item : v) {
		cout << item << ' ';
	}
	cout << endl;*/

	// вывод контейнера черех обычный for
	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << endl;*/

	// вывод контейнера через итератор
	/*vector<int>::iterator it = v.begin();
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}*/


	map<string, string> m;
	ifstream in("dictionary.txt");
	string line1;
	string line2;
	if (in.is_open()) {
		while (getline(in, line1, ':')) {
			getline(in, line2);
			m.insert({ line1, line2 });
		}
	}
	in.close();
	for (auto item : m) {
		cout << item.first << " " << item.second;
	}
	ifstream in1("english.txt");
	ofstream out1("russian.txt");
	if (in1.is_open()) {
		if (out1.is_open()) {
			while(in1 >> line1){
				if (m.count(line1)) {
					line2 = m[line1];
				}
				out1 << line2 << ' ';
			}
		}
	}

	/*ifstream in("english.txt");
	ofstream out("russian.txt");
	string line;
	if (in.is_open()) {
		while ((in >> line)) {
			if (out.is_open())
			{
				out << line << " ";
			}
		}
	}
	out.close();
	in.close();*/

}