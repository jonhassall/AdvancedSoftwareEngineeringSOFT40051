// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Animal.cpp

#include <iostream>
#include <iomanip>
#include "Animal.h"
#include <fstream>

using namespace std;

Animal::Animal()
{
	cout << "Animal constructor called\n";
	//Set age default to 0
	Animal::setAge(0);
}

Animal::Animal(int inputAge)
{
	cout << "Parameterised Animal constructor called\n"; 
	Animal::setAge(inputAge);
}

Animal::~Animal()
{
	cout << "Animal destructor called.\n";
}

void Animal::setAge(int inputAge)
{
	age = inputAge;
}

void Animal::setName(char* inputName)
{
	name = inputName;
}

void Animal::makeNoise()
{
	cout << "Noise.\n";
}

void Animal::showName()
{
	cout << "My name is " << name << "\n";
}

void Animal::showAge()
{
	cout << "My age is " << age << "\n";
}

void Animal::sayHelloTo(char* name)
{
	cout << "Animal: sayHelloTo(" << name << ")\n";
}

void Animal::display(char* value)
{
	cout << "Displaying char: " << value << "\n";
}

void Animal::display(int value)
{
	cout << "Displaying int: " << value << "\n";
}

void Animal::display(bool value)
{
	cout << "Displaying bool: " << value << "\n";
}