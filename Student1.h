#pragma once
#include <iostream>
#include <string>
#include "Marklist.h"
#include "Human.h"
#include <vector>
using namespace std;
class Student1 : public Human
{
private:
	vector<Marklist*> markLists;
public:
	Student1();
	Marklist* getMarkList(string subject);
	void showAvg(vector <int>, string);
	~Student1();
};

