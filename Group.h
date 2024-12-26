#pragma once
#include <iostream>
#include <string>
using namespace std;
class Group
{
private:
	string nameGroup;
	string faculty;
public:
	Group(string, string);
	string getNameGroup();
	string getFaculty();
	void setNameGroup();
	void setFaculty();
	~Group();
};

