#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:
	string name;
	int age;
	float weight;
	string colour;
public:
	Pet(string name, int age, float weight, string colour);
	string getName();
	int getAge();
	float getWeight();
	string getColour();
	void setName(string name);
	void setAge(int age);
	void setWeight(float weight);
	void setColour(string colour);
	virtual void print() = 0;
	virtual void sound() = 0;
	virtual void show() = 0;
	virtual void type() = 0;
	virtual ~Pet();

};

