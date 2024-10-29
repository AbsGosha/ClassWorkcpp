#include "String.h"

String::String()
{
	this->size = 80;
	this->length = 0;
	this->str = new char[this->size];

}

String::String(int size)
{
	this->size = size;
	this->length = 0;
	this->str = new char[this->size];
}

int String::getSize(int)
{
	return this->size;
}

int String::getLength(int)
{
	return this->length;
}

char* String::getStr(char*)
{
	return nullptr;
}
const char* String::getStr(char*)

{
	return this->str;
}

void String::setStr()
{
	char str = new char[];
	
}

String::String(char* str, int)
{
	this->length = length;
	this->size = length;
	this->str = new char[length];

	for (int i = 0; i < length; i++) {
		this->str[i] = str[i];
	}
}

String::String(const String& str)
{
	this->size = str.size;
	this->length = str.length;
	this->str = new char[length];

	for (int i = 0; i < this->size; i++) {
		this->str[i] = str.str[i];
	}

}

String::~String()
{
}
