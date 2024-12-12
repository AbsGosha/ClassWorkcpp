#include <iostream>
#include "MyArr.h"
using namespace std;

int main()
{
	int* arr = new int[5]{ 1,2,3,4,5 };
	MyArr<int> obj(arr, 5, 5);
	obj.print();
	cout << obj.getUpperBound();
}
