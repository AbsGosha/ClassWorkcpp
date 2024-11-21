#pragma once
#include <iostream>
#include <string>
using namespace std;

class Passport
{
protected:
	string name;
	string surname;
	string fathername;
	string country;
	string gender;
	int day;
	int month;
	int year;
	int number;
public:
	Passport(string, string, string, string, string, int, int, int, int);
	string getName();
	string getSurname();
	string getFatherName();
	string getCountry();
	string getGender();
	int getDay();
	int getMonth();
	int getYear();
	int getNumber();
	~Passport();
};