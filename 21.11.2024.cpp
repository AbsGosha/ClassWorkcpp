#include <iostream>
#include <string>
#include "Student.h"
#include "Aspirant.h"
using namespace std;

int main()
{
	Student student1("Ivan", "Ivanov", "Ivanovich", 22, 4, 121);
	Aspirant aspirant1("windows", 5, "Ivan", "Ivanov", "Ivanovich", 22, 4, 121);
	aspirant1.printInfo();
}
