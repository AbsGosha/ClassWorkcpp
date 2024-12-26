#pragma once
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
	string login;
	string password;
public:
	Teacher(string, string);
	string getLogin();
	string getPassword();
	void setLogin(string);
	void setPassword(string);
	~Teacher();
};

