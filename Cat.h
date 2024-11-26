#pragma once
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Cat : public Pet
{
protected:
	float lengthMoustache;
public:
	Cat(float lengthMoustache, string name, int age, float weight, string colour);
	float getLengthMoustache();
	void setLengthMoustache(float lengthMoustache);
	void print();
	void sound();
	void show();
	void type();
	~Cat();
};

