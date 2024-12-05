#pragma once
#include <iostream>
#include "List.h"
using namespace std;
template <typename T>
class Queue
{
private:
	List<T> list1;
	int length;
public:
	Queue();
	Queue(T*, int length);
	void insert(T value) {
		list1.push_back(value);
	}
	void show() {
		list1.print();
	}
	void remove() {
		list1.delete_first();
	}
};

template<typename T>
inline Queue<T>::Queue()
{
	int length = 0;

}

template<typename T>
inline Queue<T>::Queue(T* arr, int length) : list1(arr, length)
{
	 
}