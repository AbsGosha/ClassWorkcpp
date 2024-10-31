#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
private:
	string familia;
	string name;
	string fatherName;
	string post;
	int yearStartWork;
	int zp;
public:
	Worker(string, string, string, string, int, int);
	string getFamilia();
	string getName();
	string getfatherName();
	string getPost();
	int getYearStartWork();
	int getZP();
	~Worker();
};

