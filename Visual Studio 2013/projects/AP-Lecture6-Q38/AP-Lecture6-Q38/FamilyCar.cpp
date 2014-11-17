// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38
// Implementation - FamilyCar.cpp

#include <iostream>
#include <iomanip>
#include "Car.h"
#include "FamilyCar.h"
#include <fstream>

using namespace std;

void FamilyCar::display()
{
	cout << "\nCar information\n" << left << setw(12) << "Make: ";
	displayMake();
	cout << "\n" << setw(12) << "Year: " << year << "\n"
		<< setw(12) << "Owner: ";
	displayOwner();
	cout << "\n" << setw(12) << "Petrol: " << petrol << "\n" << setw(12) << "Tank size: " << tankSize << "\n"
		<< setw(12) << "MPG: " << mpg << "\n"
		<< setw(12) << "Range: " << getRange() << " miles\n"<< setw(12) << "MPG: " << mpg << "\n"
		<< setw(12) << "DVD: " << DVDInstalled << "\n";
}