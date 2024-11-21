#include "Visa.h"

Visa::Visa(string countrty, int dateFinish)
{
    this->country = country;
    this->dateFinish = dateFinish;
}

string Visa::getCountry()
{
    return this->country;
}

int Visa::getDateFinish()
{
    return this->dateFinish;
}

Visa::~Visa()
{
}
