#include "Dog.h"

Dog::Dog(string breed, string name, int age, float weight, string colour) : Pet(name, age, weight, colour)
{
	this->breed = breed;
}

string Dog::getBreed()
{
	return this->breed;
}

void Dog::setBreed(string breed)
{
	this->breed = breed;
}

void Dog::print()
{
	cout << this->breed;
}

void Dog::sound()
{
	cout << "gaf" << endl;
}

void Dog::show()
{
	cout << "bobik" << endl;
}

void Dog::type()
{
	cout << "dog" << endl;
}

Dog::~Dog()
{
}
