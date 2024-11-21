#pragma once
#include <iostream>
#include <string>
using namespace std;
class Visa
{
public:
	string country;
	int dateFinish;
	Visa(string, int);
	string getCountry();
	int getDateFinish();
	~Visa();
};

