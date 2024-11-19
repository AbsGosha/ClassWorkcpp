#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Customer.h"
#include "Product.h"
class Supermarket
{	
public:
	Customer* customers;
	string name;
	int sizeCustomers;
	Supermarket(string name) : name(name), sizeCustomers(1) {};
	void addCustomer(string name);
	void getInfoCustomer();
	~Supermarket();
	
};

