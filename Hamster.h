#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Hamster : public Pet
{
protected:
	int sizeWheel;
public:
	Hamster(int sizeWheel, string name, int age, float weight, string colour);
	float getSizeWheel();
	void setSizeWheel(int sizeWheel);
	void print();
	void sound();
	void show();
	void type();
	~Hamster();
};

