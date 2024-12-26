#include "Student1.h"

Student1::Student1()
{
  
}

Marklist* Student1::getMarkList(string subject)
{
	for (Marklist* list : markLists) {
		if (list->getSubject() == subject) {
			return list;
		}
	}
	return nullptr;
}

void Student1::showAvg(vector<int> markLists, string subject)
{
	if( == subject) {}
	this->markLists[0]->avg();
}

Student1::~Student1()
{
}
