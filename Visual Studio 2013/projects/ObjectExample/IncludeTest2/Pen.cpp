//Implementation

#include <iostream>
#include "Pen.h"

using namespace std;

Pen::Pen()
{
	cout << "\nConstructor called!\n";
}

Pen::Pen(int myInt)
{
	cout << "\nConstructor called with value!\n";
}

Pen::~Pen()
{
	cout << "\nDestructor called!\n";
}

void Pen::write(int myInt)
{
	cout << myInt;
}

void Pen::store(int myInt)
{
	storedInt = myInt;
	cout << "\nStored integer.\n";
}

void Pen::outputStored()
{
	cout << "\nStored integer is : " << storedInt;
}

int Pen::outputStoredByReturn()
{
	return storedInt;
}

void Pen::callMyself1()
{
	cout << "\ncallmyself1\n";
}

void Pen::callMyself2()
{
	cout << "\ncallmyself2\n";
	callMyself1();
}