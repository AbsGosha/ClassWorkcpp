#include <iostream>
#include "MyArray.h"
using namespace std;
void showArr(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int main()
{
	srand(time(NULL));
	int* arr = new int[5]{ 2,4,6,8,10 };
	int* arr3 = new int[5]{ 1,3,5,7,9 };
	MyArray arr1(arr, 5, 0);
	MyArray arr2(arr3, 5, 0);
	/*MyArray (arr, 5, 0);*/
	(arr1 + arr2).print();
	cout << endl;
	(arr1 - arr2).print();
	cout << endl;
	(arr1 * arr2).print();
	cout << endl;
	(arr1 / arr2).print();
	cout << endl;
	cout << (arr1 == arr2);
	cout << endl;
	cout << (arr1 != arr2);
	cout << endl;
	cout << (arr1 > arr2);


	
}
