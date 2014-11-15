// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Cat.cpp

#include <iostream>
#include <iomanip>
#include "Animal.h"
#include "Cat.h"
#include <fstream>

using namespace std;

Cat::Cat()
{
	cout << "Cat non-parameterised constructor called.\n";
	//Set age default to 0
	Cat::setAge(0);
}

//Non-parameterised constructors of the base class are called by default
//Base class constructors are automatically called for you if they have no argument.
//If you want to call a superclass constructor with an argument, you must use the subclass's constructor initialization list. 
//Parameterised constructors need the following:
Cat::Cat(int inputAge):Animal(inputAge)
{
	cout << "Cat parameterised constructor called.\n";
}

Cat::~Cat()
{
	cout << "Cat destructor called\n";
}

void Cat::antagonise()
{
	switch (willScratchYou)
	{
	case true:
		cout << "The cat is angry and scratched you.\n";
		break;

	default:
		cout << "The cat is angry but did not scratch you.\n";
		break;
	}

}

void Cat::makeNoise()
{
	cout << "Meow\n";
}

/*void Cat::sayHelloTo(char* name)
{
	cout << "Cat: sayHelloTo(" << name << ")\n";
}*/