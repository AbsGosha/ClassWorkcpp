#include "Sector.h"

Sector::Sector(string address)
{
    this->address = address;
}

string Sector::getAddress()
{
    return this->address;
}

void Sector::setAddress(string)
{
    this->address = address;
}

Sector::~Sector()
{
}
