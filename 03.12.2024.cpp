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
	Queue <int> list1;
	list1.insert(5);
	list1.insert(1);
	list1.insert(2);
	list1.insert(3);
	list1.show();
	list1.remove();
	list1.show();
}
