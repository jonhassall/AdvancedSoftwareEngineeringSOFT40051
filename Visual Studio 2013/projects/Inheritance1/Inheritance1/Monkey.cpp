// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Monkey.cpp

#include <iostream>
#include <iomanip>
#include "Animal.h"
#include "Monkey.h"
#include <fstream>

using namespace std;

Monkey::Monkey()
{
	cout << "Monkey non-parameterised constructor called.\n";
	//Set age default to 0
	Monkey::setAge(0);
}

//Non-parameterised constructors of the base class are called by default
//Base class constructors are automatically called for you if they have no argument.
//If you want to call a superclass constructor with an argument, you must use the subclass's constructor initialization list. 
//Parameterised constructors need the following:
Monkey::Monkey(int inputAge) :Animal(inputAge)
{
	cout << "Monkey parameterised constructor called.\n";
}

Monkey::~Monkey()
{
	cout << "Monkey destructor called.\n";
}

void Monkey::antagonise()
{
	switch (willScratchYou)
	{
	case true:
		cout << "The Monkey is angry and scratched you.\n";
		break;

	default:
		cout << "The Monkey is angry but did not scratch you.\n";
		break;
	}

}

void Monkey::makeNoise()
{
	cout << "Ooo Ahh Ahh\n";
}

void Monkey::sayHelloTo(char* name)
{
	cout << "Monkey: sayHelloTo(" << name << ")\n";
}