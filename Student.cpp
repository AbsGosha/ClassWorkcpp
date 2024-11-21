#include "Student.h"

Student::Student(string name, string surname, string fathername, int age, int course, int group)
{
    this->name = name;
    this->surname = surname;
    this->fathername = fathername;
    this->age = age;
    this->course = course;
    this->group = group;
}

string Student::getName()
{
    return this->name;
}

string Student::getSurname()
{
    return this->surname;
}

string Student::getFathername()
{
    return this->fathername;
}

int Student::getAge()
{
    return this->age;
}

int Student::getCourse()
{
    return this->course;
}

int Student::getGroup()
{
    return this->group;
}

Student::~Student()
{

}
