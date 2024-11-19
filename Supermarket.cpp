#include "Supermarket.h"

void Supermarket::addCustomer(string name)
{
	Customer temp(name);
	customers = new Customer[1]{ temp };
}

void Supermarket::getInfoCustomer()
{
	for (int i = 0; i < this->sizeCustomers; i++) {
		cout << this->customers[i].name << " " << this->customers[i].getCardNumber()
			<< " " << this->customers[i].getCardBalance();
	}
}

Supermarket::~Supermarket()
{
}
