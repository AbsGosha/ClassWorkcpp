#pragma once
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

class Aspirant : public Student
{
protected:
	string theme;
	int mark;
public:
	Aspirant(string theme, int mark, string name, string surname, string fathername, int age, int course, int group);
	string getTheme();
	int getMark();
	void printInfo();
	~Aspirant();
};

