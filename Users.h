#pragma once
#include <iostream>
#include <string>
#include <vector> 
#include "Tests.h"
#include "Admins.h"
#include <cstdlib>
using namespace std;
class Users
{
private:
	string nameTest;
	string categoryTest;
public:
	Users();
	Users(string, string);
	string getNameTest();
	string getCategoryTest();
	void setNameTest(string);
	void setCategoryTest(string);
	void goTest();

};
