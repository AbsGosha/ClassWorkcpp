#pragma once
#include <iostream>
using namespace std;
class String
{
private:
	char* str;
	int length;
	int size;

public:
	String();
	String(int);

	int getSize(int);
	int getLength(int);
	char* getStr(char*);
	void setStr();
	String(char*, int);
	String(const String&);
	~String();
};

