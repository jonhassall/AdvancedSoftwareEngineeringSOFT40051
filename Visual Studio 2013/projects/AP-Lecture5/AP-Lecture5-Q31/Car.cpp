// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 5 - Q31
// Implementation - Car.cpp

#include <iostream>
#include <iomanip>
#include "Car.h"
#include <fstream>

using namespace std;

Car::Car()
{
	cout << "Constructor Car() called" << "\n";
	Car::showGraphic();
}

Car::Car(char make[], int year, double petrol, double tankSize, double mpg, char owner[])
{
	cout << "Constructor Car(params) called" << "\n";
	Car::changeOwner(owner); 
	Car::setMake(make);
	Car::setYear(year);
	Car::setPetrol(petrol);
	Car::setTankSize(tankSize);
	Car::setMpg(mpg);
	Car::showGraphic();
}

Car::~Car()
{
	cout << "Destructor called.\n";

	//It is good practice to set a pointer to NULL before deleting
	if (makePtr != NULL && ownerPtr != NULL)
	{
		makePtr = NULL;
		ownerPtr = NULL;

		delete[] makePtr; //Use delete[] to delete an array, delete to delete a single address pointer
		delete[] ownerPtr;
	}
}

//Show an ASCII graphic from a text file
void Car::showGraphic()
{
	ifstream dataIn;
	dataIn.open("CarASCII.txt");
	if (!dataIn)
	{
		//Don't show an error as this isn't critical
	}
	else
	{
		char textLine[128];
		//dataIn.getline(textLine, sizeof(textLine), '\n');
		while (!dataIn.eof())
		{
			dataIn.getline(textLine, sizeof(textLine), '\n');
			cout << textLine << "\n";
		}
	}
}

void Car::display()
{
	cout << "\nCar information\n" << left << setw(12) << "Make: ";
	displayMake();
	cout << "\n" << setw(12) << "Year: " << year << "\n"
		<< setw(12) << "Owner: ";
	displayOwner();
	cout << "\n" << setw(12) << "Petrol: " << petrol << "\n" << setw(12) << "Tank size: " << tankSize << "\n"
		<< setw(12) << "MPG: " << mpg << "\n"
		<< setw(12) << "Range: " << getRange() << " miles\n";
}

//Pass number of gallons as a parameter and return gallons actually input before tank is full
double Car::fillPetrol(double gallons)
{
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
	if (petrol + gallons >= tankSize) //Overfill or full
	{
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

//Get maximum range of car with current fuel level
double Car::getRange()
{
	double milesRange = petrol * mpg;
	return milesRange;
}

//Get distance actually travelled, stopping if empty
double Car::drive(double distance)
{
	//Check if distance is valid
	if (distance <= 0)
	{
		cerr << "Error with distance given.\n";
		return 0;
	}

	//Calculate how many miles are possible with current petrol
	double milesRange = getRange();

	//If distance is greater than possible miles,
	//Return distance travelled (maximum range), and empty tank
	if (distance >= milesRange)
	{
		petrol = 0;
		Car::empty();
		return milesRange;
	}

	//Otherwise, calculate how much petrol distance will use, subtract it from petrol
	//And return distance
	double petrolToUse = distance / mpg;
	petrol = petrol - petrolToUse;

	return distance;
}

void Car::changeOwner(char owner[])
{
	ownerPtr = new char[strlen(owner)+1];
	strcpy_s(ownerPtr, strlen(owner) + 1, owner); //Remember to add one for \0 at end
}

void Car::displayOwner()
{
	for (int i = 0; ownerPtr[i] != '\0'; i++)
	{
		cout << ownerPtr[i];
	}
}

void Car::setMake(char make[])
{
	makePtr = new char[strlen(make)+1];
	strcpy_s(makePtr, strlen(make) + 1, make);
}

void Car::displayMake()
{
	for (int i = 0; makePtr[i] != '\0'; i++)
	{
		cout << makePtr[i];
	}
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
	cout << "\nAlert: Petrol tank is full!\n";
}

void Car::empty()
{
	cout << "\nAlert: Petrol tank is empty!\n";
}