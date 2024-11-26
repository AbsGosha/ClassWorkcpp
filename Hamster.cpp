#include "Hamster.h"

Hamster::Hamster(int sizeWheel, string name, int age, float weight, string colour) : Pet(name, age, weight, colour)
{
	this->sizeWheel = sizeWheel;
}

float Hamster::getSizeWheel()
{
	return this->sizeWheel;
}

void Hamster::setSizeWheel(int sizeWheel)
{
	this->sizeWheel = sizeWheel;
}

void Hamster::print()
{
	cout << this->sizeWheel << endl;
}

void Hamster::sound()
{
	cout << "tap" << endl;
}

void Hamster::show()
{
	cout << "elvin" << endl;
}

void Hamster::type()
{
	cout << "hamster" << endl;
}

Hamster::~Hamster()
{
}
