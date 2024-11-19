#pragma once
#include <iostream>
using namespace std;
class DiscountCard
{
public:
	int number;
	int balance;
	static int ind;
	int getCardBalance();
	int getCardNumber();
	DiscountCard();
	~DiscountCard();
};

