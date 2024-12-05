#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Node
{
	T value;
	Node* next;

	Node(T value) : value(value), next(nullptr) {};
};

template <typename T>
class List
{
private:
	Node<T>* first;
public:
	List() : first(nullptr){}
	void push_back(T value) {
		if (this->empty()) {
			this->first = new Node<T>(value);
				return;
		}
		Node<T>* p = this->first;
		while (p->next != nullptr) {
			p = p->next;
		}
		p->next = new Node<T>(value);
	}
	bool empty() { return (first == nullptr) ? true : false; }

	void print() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = this->first;
		while (p != nullptr) {
			cout << p->value << " ";
			p = p->next;
		}
		cout << endl;
	}
	void push_front(T value) { // äîáàâëåíèå ýëåìåíòà â íà÷àëî
		if (this->empty()) {
			this->first = new Node<T>(value);
			return;
		}
		Node<T>* p = new Node<T>(value);
		p->next = this->first;
		this->first = p;
	}
	void delete_last() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = first;
		while (p->next->next != nullptr) {
			p = p->next;
		}
		delete p->next;
		p->next = nullptr;

	}
	void delete_first() {
		if (this->empty()) {
			return;
		}
		Node<T>* p = first;
		first = p->next;
		delete p;

	}
	List(T* arr, int size) {
		for (int i = 0; i < size; i++) {
			push_back(arr[i]);
		}
	}
};

