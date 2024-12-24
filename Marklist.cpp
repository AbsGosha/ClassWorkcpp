#include "Marklist.h"

Marklist::Marklist(string subject, int examMark)
{
    this->subject = subject;
    this->examMark = examMark;
}

string Marklist::getSubject()
{
    return this->subject;
}

int Marklist::getExamMark()
{
    this->examMark;
}

void Marklist::setSubject(string subject)
{
    this->subject = subject;
}

void Marklist::setExam(int examMark)
{
    this->exam = examMark;
}

Marklist::~Marklist()
{
}
