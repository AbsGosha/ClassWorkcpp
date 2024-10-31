#include "Worker.h"

Worker::Worker(string familia, string name, string fatherName, string post, int yearStartWork, int zp)
{
	this->familia = familia;
	this->name = name;
	this->fatherName = fatherName;
	this->post = post;
	this->yearStartWork = yearStartWork;
	this->zp = zp;
}

string Worker::getFamilia()
{
	return this->familia;
}

string Worker::getName()
{
	return this->name;
}

string Worker::getfatherName()
{
	return this->fatherName;
}

string Worker::getPost()
{
	return this->post;
}

int Worker::getYearStartWork()
{
	return this->yearStartWork;
}

int Worker::getZP()
{
	return this->zp;
}

Worker::~Worker()
{

}
