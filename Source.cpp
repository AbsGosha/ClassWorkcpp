#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "��� ������\t| ��� ��������\t| ���� ��������\t| ���������� ����\t|";
	cout << "short" << "\t";
	cout << " | " << SHRT_MIN << "\t";
	cout << " | " << SHRT_MAX << "\t\t";
	cout << " |" << sizeof(short);
	cout << "����� �����" << endl;

	cout << "int" << "\t\t\t";
	cout << " | " << INT_MIN << "\t\t\t";
	cout << " | " << INT_MAX << "\t\t";
	cout << " | " << sizeof(int);
	cout << "����� �����" << endl;

	cout << "float" << "\t\t\t";
	cout << " | " << FLT_MIN << "\t\t\t";
	cout << " | " << FLT_MAX << "\t\t\t";
	cout << " | " << sizeof(float);
	cout << "������� �����" << endl;

	cout << "long long " << "\t\t\t";
	cout << " | " << LLONG_MIN << "\t";
	cout << " | " << LLONG_MAX << "\t\t";
	cout << " | " << sizeof(long long);
	cout << "����� �����" << endl;

	cout << "char" << "\t\t\t";
	cout << " | " << CHAR_MIN << "\t\t\t";
	cout << " | " << CHAR_MAX << "\t\t\t";
	cout << " | " << sizeof(char);
	cout << "�������" << endl;

	cout << "bool" << "\t\t\t";
	cout << " | " << SHRT_MIN << "\t\t\t";
	cout << " | " << SHRT_MAX << "\t\t\t";
	cout << " | " << sizeof(short);
	cout << "������" << endl;

	cout << "double" << "\t\t\t";
	cout << " | " << DBL_MIN << "\t\t\t";
	cout << " | " << DBL_MAX << "\t\t\t";
	cout << " | " << sizeof(double);
	cout << "���������� �����" << endl;

}