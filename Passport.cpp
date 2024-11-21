#include "Passport.h"

Passport::Passport(string name, string surname, string fathername,  string country, string gender, int day, int month, int year, int number)
{
    this->name = name;
    this->surname = surname;
    this->fathername = fathername;
    this->country = country;
    this->gender = gender;
    this->day = day;
    this->month = month;
    this->year = year;
    this->number = number;
}

string Passport::getName()
{
    return this->name;
}

string Passport::getSurname()
{
    return this->surname;
}

string Passport::getFatherName()
{
    return this->fathername;
}

string Passport::getCountry()
{
    return this->country;
}

string Passport::getGender()
{
    return this->gender;
}

int Passport::getDay()
{
    return this->year;
}

int Passport::getMonth()
{
    return this->month;
}

int Passport::getYear()
{
    return this->year;
}

int Passport::getNumber()
{
    return this->number;
}

Passport::~Passport()
{
}
