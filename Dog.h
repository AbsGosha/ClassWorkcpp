#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Dog : public Pet
{
protected:
	string breed;
public:
	Dog(string breed, string name, int age, float weight, string colour);
	string getBreed();
	void setBreed(string breed);
	void print();
	void sound();
	void show();
	void type();
	~Dog();

};

