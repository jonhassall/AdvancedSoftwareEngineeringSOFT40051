// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38
// Implementation - TurboCar.cpp

#include <iostream>
#include <iomanip>
#include "Car.h"
#include "TurboCar.h"
#include <fstream>

using namespace std;

void TurboCar::dirtBag()
{
	cout << "Dirtbag";
}

void TurboCar::display()
{
	cout << "\nCar information\n" << left << setw(12) << "Make: ";
	displayMake();
	cout << "\n" << setw(12) << "Year: " << year << "\n"
		<< setw(12) << "Owner: ";
	displayOwner();
	cout << "\n" << setw(12) << "Petrol: " << petrol << "\n" << setw(12) << "Tank size: " << tankSize << "\n"
		<< setw(12) << "MPG: " << mpg << "\n"
		<< setw(12) << "Range: " << getRange() << " miles\n"<< setw(12) << "MPG: " << mpg << "\n"
		<< setw(12) << "Turbos: " << turbosInstalled << "\n"
		<< setw(12) << "TurboMiles: " << turboMilesCovered << "\n";
}

double TurboCar::drive(double distance)
{
	double distance_driven = Car::drive(distance);
	turboMilesCovered = turboMilesCovered + distance_driven;
	return distance_driven;
}