#include <iostream>
#include "MyArray.h"
using namespace std;
template <typename T>
T sum(T val) {
	return val;
}

template <typename T>
T avg(T* arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	sum /= size;
	return sum;
}

int main()
{
	int* arr1 = new int[5]{ 2,4,6,8,10 };
	int* arr2 = new int[5]{ 1,3,5,7,9 };
	MyArray arr3(arr1, 5, 0);
	MyArray arr4(arr2, 5, 0);
	cout << (arr3 > arr4);
	cout << endl;
	cout << (arr3 < arr4);
	cout << endl;
	cout << (arr3 <= arr4);
	cout << endl;
	cout << (arr3 >= arr4);

	int a = 10;
	cout << sum(a);
	cout << endl;
	int* arr = new int[5]{ 1,2,3,4,5 };
	cout << avg(arr, 5);
}
