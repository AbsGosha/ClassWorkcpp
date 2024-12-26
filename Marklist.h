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
	vector<int>marks;
public:
	Marklist(string, int, vector<int>);
	string getSubject();
	int getExamMark();
	vector<int> getMarklist();
	void setSubject(string);
	void setExam(int);
	void setMarklist(vector<int>);
	void addMarks(int);
	void avg();
	void printMarks();
	~Marklist();
};

