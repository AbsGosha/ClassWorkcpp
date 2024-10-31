#include "Book.h"

Book::Book(string avtor, string name, string publish, int year, int pages)
{
	this->avtor = avtor;
	this->year= year;
	this->publish = publish;
	this->pages = pages;
	this->name = name;
}

string Book::getAvtor()
{
	return this->avtor;
}

string Book::getName()
{
	return this->name;
}

string Book::getPublish()
{
	return this->publish;
}

int Book::getYear()
{
	return this->year;
}

int Book::getPages()
{
	return this->pages;
}

Book::~Book()
{

}
