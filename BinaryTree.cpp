#include "BinaryTree.h"

void BinaryTree::clearMemory(Node* root)
{
	if (root == nullptr) {
		return;
	}
	clearMemory(root->left);
	clearMemory(root->right);
	delete root;
}

BinaryTree::BinaryTree(int* arr, int size)
{
    
}

void BinaryTree::insert(int value, Node* node)
{
    if (this->root == nullptr) {
        
    }
}

void BinaryTree::remove(int value, Node* node)
{
}

Node* BinaryTree::find(int value, Node* node)
{
    return nullptr;
}

void BinaryTree::print(Node* root)
{
	if (root == nullptr) {
		return;
	}
	print(root->left);
	cout << root->value << " ";
	print(root->right);
	
}

BinaryTree::~BinaryTree()
{
}
