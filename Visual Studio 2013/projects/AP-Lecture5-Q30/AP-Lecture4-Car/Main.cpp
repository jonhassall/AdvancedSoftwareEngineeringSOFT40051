// File: main.cpp
// Version: V1.0
// Date: 31-10-14
// Name: Jonathan Hassall
// Lecture 4 - Car

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

int main()
{
	Car myCar;
	myCar.changeOwner("Jonathan");
	myCar.setMake("Ford");
	myCar.setYear(2001);
	myCar.setPetrol(3);
	myCar.setTankSize(8.79877);
	myCar.setMpg(38);

	myCar.display();

	char input;
	int input_int;

	bool quit = false;
	while (quit == false)
	{
		double petrolUsed;
		double milesDriven;

		cout << "\nPlease choose an option by typing the character in brackets:\n(F)ill with petrol, (D)rive car, (Q)uit\n";
		cin >> input;

		switch (input)
		{
		case 'F':
		case 'f':
			cout << "Fill with petrol. How much (gallons)?: ";
			cin >> input_int;
			petrolUsed = myCar.fillPetrol(input_int);
			cout << "\n" << petrolUsed << " gallons of petrol were used to fill the car.\n";
			myCar.display();
			break;

		case 'D':
		case 'd':
			cout << "Drive car. How many miles?: ";
			cin >> input_int;
			milesDriven = myCar.drive(input_int);
			cout << "\n" << milesDriven << " miles were driven by the car.\n";
			myCar.display();
			break;

		case 'Q':
		case 'q':
			cout << "Goodbye!\n";
			return 0;
			break;

		default:
			cout << "Invalid choice.";
			break;
		}
	}

	/*
	cout << "\n" << "Fill with 10 gallons of petrol\n";
	double petrolAmount = myCar.fillPetrol(10);
	cout << "\n" << petrolAmount << "\n";
	myCar.display();

	cout << "\n" << "Request to drive 25 miles\n";
	myCar.drive(25);
	myCar.display();*/

	return 0;
}