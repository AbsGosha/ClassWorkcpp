#pragma once
#include <iostream>
#include <string>
using namespace std;
class Sector
{
private:
	string address;
public:
	Sector(string);
	string getAddress();
	void setAddress(string);
	~Sector();
};

