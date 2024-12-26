#include "Lesson.h"

Lesson::Lesson(string subject)
{
    this->subject = subject;
}

string Lesson::getSubject()
{
    return this->subject;
}

void Lesson::setSubject(string subject)
{
    this->subject = subject;
}

Lesson::~Lesson()
{
}
