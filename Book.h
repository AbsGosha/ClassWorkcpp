#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string avtor;
	string name;
	string publish;
	int year;
	int pages;
public:
	Book(string, string, string, int, int);
	string getAvtor();
	string getName();
	string getPublish();
	int getYear();
	int getPages();
	~Book();

};

