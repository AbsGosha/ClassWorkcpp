#pragma once
#include <iostream>
#include <string>
#include "Passport.h"
#include "Visa.h"
using namespace std;
class ForeignPassport : public Passport
{
protected:
	int numberInsideCountry;
	Visa* visa;
public:
	ForeignPassport(int numberInsideCountry, string name, string surname, string fathername, string country,
		string gender, int day, int month, int year, int number);
	~ForeignPassport();

};

