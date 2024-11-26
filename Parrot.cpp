#include "Parrot.h"

Parrot::Parrot(float lengthFeathers, string name, int age, float weight, string colour) : Pet(name, age, weight, colour)
{
	this->lengthFeathers = lengthFeathers;
}

float Parrot::getLengthFeathers()
{
	return this->lengthFeathers;
}

void Parrot::setLengthFeathers(float lengthFeathers)
{
	this->lengthFeathers = lengthFeathers;
}

void Parrot::print()
{
	cout << this->lengthFeathers << endl;
}

void Parrot::sound()
{
	cout << "kykareky" << endl;
}

void Parrot::show()
{
	cout << "kesha" << endl;
}

void Parrot::type()
{
	cout << "parrot" << endl;
}

Parrot::~Parrot()
{
}
