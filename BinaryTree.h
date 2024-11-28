#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class BinaryTree
{
	Node* root;

	/*Node* insertRec(Node* node, int value) {
		if (node == nullptr) return new
			Node(value);
	}*/
	void clearMemory(Node* root);
public:
	BinaryTree(int* arr, int size);
	BinaryTree() : root(nullptr){}
	void insert(int value, Node* node);/* { root = insertRec(root, value); }*/
	void remove(int value, Node* node);
	Node* find(int value, Node* node);
	void print(Node* root);
	Node* getRoot() { return this->root; }
	~BinaryTree();
};

