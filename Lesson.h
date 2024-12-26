#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
using namespace std;
class Lesson
{
private:
	string subject;
public:
	Lesson(string);
	string getSubject();
	void setSubject(string);
	~Lesson();
};

