#include "Teacher.h"

Teacher::Teacher(string login, string password)
{
    this->login = login;
    this->password = password;
}

string Teacher::getLogin()
{
    return this->login;
}

string Teacher::getPassword()
{
    return this->password;
}

void Teacher::setLogin(string login)
{
    this->login = login;
}

void Teacher::setPassword(string password)
{
    this->password = password;
}

Teacher::~Teacher()
{
}
