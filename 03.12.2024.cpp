#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List <int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	cout << endl;
	list.print();
	cout << endl;
	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	cout << endl;
	list.print();
	cout << endl;
	list.delete_last();
	cout << endl;
	list.print();
	cout << endl;
	list.delete_first();
	cout << endl;
	list.print();
}
