#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
	string name;
	string surname;
	string fathername;
	int age;
	int course;
	int group;
public:
	Student(string, string, string, int, int, int);
	string getName();
	string getSurname();
	string getFathername();
	int getAge();
	int getCourse();
	int getGroup();
	~Student();
};

