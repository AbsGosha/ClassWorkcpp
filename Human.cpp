#include "Human.h"

Human::Human(string name, string surname, string fathername, int age, string phoneNumber)
{
    this->name = name;
    this->surname = surname;
    this->fathername = fathername;
    this->age = age;
    this->phoneNumber = phoneNumber;
}

string Human::getName()
{
    return this->name;
}

string Human::getSurname()
{
    return this->surname;
}

string Human::getFathername()
{
    return this->fathername;
}

int Human::getAge()
{
    return this->age;
}

string Human::getPhoneNumber()
{
    return this->phoneNumber;
}

void Human::setName(string name)
{
    this->name = name;
}

void Human::setSurname(string surname)
{
    this->surname = surname;
}

void Human::setFathername(string fathername)
{
    this->fathername;
}

void Human::setAge(int age)
{
    this->age = age;
}

void Human::setPhoneNumber(string phonenNumber)
{
    this->phoneNumber = phonenNumber;
}

void Human::printHuman()
{
    cout <<"FIO: " << this->surname << " " << this->name << " " << this->fathername << endl;
    cout << "Age: " << this->age << endl;
    cout << "Phone number: " << this->phoneNumber << endl;
}

Human::~Human()
{
}
