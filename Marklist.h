#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Marklist
{
private:
	string subject;
	int examMark;
	vector<int>marksSubject;
public:
	Marklist(string, int);
	string getSubject();
	int getExamMark();
	void setSubject(string);
	void setExam(int);
	~Marklist();
};

