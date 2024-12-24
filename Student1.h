#pragma once
#include <iostream>
#include <string>
#include "Marklist.h"
#include <vector>
using namespace std;
class Student1 : private Marklist
{
private:
	vector<Marklist*> markLists;
public:
	Student1();
	Marklist* getMarkList(string subject);
	~Student1();
};

