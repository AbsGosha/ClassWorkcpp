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

Student1::~Student1()
{
}
