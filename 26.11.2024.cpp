#include <iostream>
#include <string>
#include "Pet.h"
#include "Parrot.h"
#include "Hamster.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main()
{
	Pet* parrot;
	parrot = new Parrot(4, "kesha", 10, 4.0, "white");
	parrot->sound();
	delete parrot;

	Pet* hamster;
	hamster= new Hamster(10, "elvin", 6, 5.0, "brown");
	hamster->sound();
	delete hamster;

	Pet* dog;
	dog = new Dog("sheepdog", "bobik", 9, 20.0, "black");
	dog->sound();
	delete dog;

	Pet* cat;
	dog = new Cat(3.5, "marc", 7, 12.0, "orange");
	cat->sound();
	delete cat;

}

