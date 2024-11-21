#include "Aspirant.h"

Aspirant::Aspirant(string theme, int mark, string name, string surname, string fathername, int age, int course, int group)
	: Student(name, surname, fathername, age, course, group)
{
	this->theme = theme;
	this->mark = mark;
}

string Aspirant::getTheme()
{
	return this->theme;
}
int Aspirant::getMark()
{
	return this->mark;
}

void Aspirant::printInfo()
{
	cout << "Name: " << this->name << endl;
	cout << "Surname: " << this->surname << endl;;
	cout << "Fathername: " << this->fathername << endl;
	cout << "Age: " << this->age << endl;
	cout << "Course: " << this->course << endl;
	cout << "Group: " << this->group << endl;
	cout << "Theme: " << this->theme << endl;
	cout << "Mark: " << this->mark << endl;;

}

Aspirant::~Aspirant()
{

}
