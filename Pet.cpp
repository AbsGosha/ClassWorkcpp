#include "Pet.h"

Pet::Pet(string name, int age, float weight, string colour)
{
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->colour = colour;
}

string Pet::getName()
{
	return this->name;
}

int Pet::getAge()
{
	return this->age;
}

float Pet::getWeight()
{
	return this->weight;
}

string Pet::getColour()
{
	return this->colour;
}

void Pet::setName(string name)
{
	this->name = name;
}

void Pet::setAge(int age)
{
	this->age = age;
}

void Pet::setWeight(float weight)
{
	this->weight = weight;
}

void Pet::setColour(string colour)
{
	this->colour = colour;
}

Pet::~Pet()
{
}
