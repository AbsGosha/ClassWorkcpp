#pragma once
#include <iostream>
#include <string>
using namespace std;
class Human
{
protected:
	string name;
	string surname;
	string fathername;
	int age;
	string phoneNumber;
public:
	Human(string, string, string, int, string);
	string getName();
	string getSurname();
	string getFathername();
	int getAge();
	string getPhoneNumber();
	void setName(string);
	void setSurname(string);
	void setFathername(string);
	void setAge(int);
	void setPhoneNumber(string);
	void printHuman();
	~Human();
};

