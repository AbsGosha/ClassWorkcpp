#include "Marklist.h"

Marklist::Marklist(string subject, int examMark, vector<int>)
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

vector<int> Marklist::getMarklist()
{
    return this->marks;
}

void Marklist::setSubject(string subject)
{
    this->subject = subject;
}

void Marklist::setExam(int examMark)
{
    this->examMark = examMark;
}

void Marklist::setMarklist(vector<int> marks)
{
    this->marks = marks;
}

void Marklist::addMarks(int newMarks)
{
    this->marks.push_back(newMarks);
}

void Marklist::avg()
{
    float avg;
    for (int i = 0; i < this->marks.size(); i++) {
        avg = marks[i];
    }
    cout << avg / marks.size();
}

void Marklist::printMarks()
{
    cout << "Subject: " << this->subject << endl;
    cout << "Exam mark: " << this->examMark << endl;
    for (int i = 0; i < marks.size(); i++) {
        cout << "Marks: " << marks[i];
    }
    cout << endl;
}

Marklist::~Marklist()
{

}
