#pragma once
#include <iostream>
#include "List.h"
using namespace std;
template <typename T>
class Stack
{
private:
	List<T> arr;
	int size;
public:
	Stack();
	Stack(T*, int size);
	void push_back(T value) {
		arr.push_back(value);
	}
	void pop_back() {
		arr.delete_last();
	}
	void print() {
		arr.print();
	}
	int top() {	/*return last element*/
		Node<T>* p = arr.getFirst();
		while (p->next != nullptr) {
			p = p->next;
		}
		return p->value;
	}
	~Stack() {};
};

template<typename T>
inline Stack<T>::Stack() : arr()
{
	int size = 0;
	
}

template<typename T>
inline Stack<T>::Stack(T* arr, int size)
{

}




