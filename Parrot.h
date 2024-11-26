#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

class Parrot : public Pet
{
protected:
	float lengthFeathers;
public:
	Parrot(float lengthFeathers, string name, int age, float weight, string color);
	float getLengthFeathers();
	void setLengthFeathers(float lengthFeathers);
	void print();
	void sound();
	void show();
	void type();
	~Parrot();

};

