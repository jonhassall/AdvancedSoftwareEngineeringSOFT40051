//Implementation - Car.cpp
#include <iostream>
#include <iomanip>
#include "Car.h"
using namespace std;

Car::Car()
{
	cout << "Constructor Car() called" << "\n";
}

Car::Car(char * make, int year, double petrol, double tankSize, double mpg, char * owner)
{
	cout << "Constructor Car(params) called" << "\n";
	Car::setMake(make);
	Car::setYear(year);
	Car::setPetrol(petrol);
	Car::setTankSize(tankSize);
	Car::setMpg(mpg);
	Car::changeOwner(owner);
}

void Car::display()
{
	cout << "\nCar information: " << "Make: " << make << " Year: " << year << " Petrol: " << petrol << " Tank size: " << tankSize << " MPG: " << mpg << " Owner: " << owner << " Range: " << getRange() << " miles\n";
}

double Car::fillPetrol(double gallons)
{
	//Pass number of gallons as a parameter and return gallons actually 
	//input (before full)

	//Check if tank size is valid
	if (Car::tankSize <= 0)
	{
		cerr << "Error with tank size.\n";
		return 0;
	}

	//Check if gallons input is valid
	if (gallons < 0)
	{
		cerr << "Error with input.\n";
		return 0;
	}

	//If tank is already full, return 0
	if (petrol >= tankSize)
	{
		return 0;
	}

	//Fill tank with input
	if (petrol + gallons >= tankSize)
	{
		//Overfill or full
		double difference = tankSize - petrol;
		petrol = tankSize;
		Car::full();
		return difference;
	}

	//Normal topping up tank
	double difference = gallons;
	petrol = petrol + gallons;

	return difference;
}

double Car::getRange()
{
	double milesRange = petrol * mpg;
	return milesRange;
}

double Car::drive(double distance)
{
	//Calculate how many miles are possible with current petrol
	double milesRange = getRange();
	cout << "Current fuel range: " << milesRange;

	//If distance is greater than possible miles,
	//Return distance, and empty tank
	//Execute empty()

	//Otherwise, calculate how much petrol distance will use, subtract it from petrol
	//And return distance
	double horsemeat = 123.123;
	return horsemeat;
}

void Car::changeOwner(char* owner)
{
	Car::owner = owner;
}

void Car::setMake(char* make)
{
	Car::make = make;
}

void Car::setYear(int year)
{
	Car::year = year;
}

void Car::setPetrol(double petrol)
{
	Car::petrol = petrol;
}

void Car::setTankSize(double tankSize)
{
	Car::tankSize = tankSize;
}

void Car::setMpg(double mpg)
{
	Car::mpg = mpg;
}

void Car::full()
{
	cout << "\nPetrol tank is full!\n";
}

void Car::empty()
{
	cout << "\nPetrol tank is empty!\n";
}