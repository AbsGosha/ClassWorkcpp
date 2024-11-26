#include "Cat.h"

Cat::Cat(float lengthMoustache, string name, int age, float weight, string colour) : Pet(name, age, weight, colour)
{
	this->lengthMoustache = lengthMoustache;
}

float Cat::getLengthMoustache()
{
	return this->lengthMoustache;
}

void Cat::setLengthMoustache(float lengthMoustache)
{
	this->lengthMoustache = lengthMoustache;
}

void Cat::print()
{
	cout << this->lengthMoustache << endl;
}

void Cat::sound()
{
	cout << "meow" << endl;
}

void Cat::show()
{
	cout << "mars" << endl;
}

void Cat::type()
{
	cout << "cat" << endl;
}

Cat::~Cat()
{
}
