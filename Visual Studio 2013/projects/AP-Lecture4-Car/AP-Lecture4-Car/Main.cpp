// File: main.cpp
// Version: V1.0
// Date: 31-10-14
// Name: Jonathan Hassall
// Lecture 4 - Car

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

/*
Use char arrays
Drive
Demonstration/testing
User inputs
*/

int main()
{
	Car myCar;
	myCar.changeOwner("Jonathan");
	myCar.setMake("Ford");
	myCar.setYear(2001);
	myCar.setPetrol(10);
	myCar.setTankSize(30);
	myCar.setMpg(32.5);

	myCar.display();

	cout << "\n" << "Fill with 10 gallons of petrol\n";
	double petrolAmount = myCar.fillPetrol(10);
	cout << "\n" << petrolAmount << "\n";
	myCar.display();
}