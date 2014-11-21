// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38

#include <iostream>
#include <string>
#include "Car.h"
#include "TurboCar.h"
#include "FamilyCar.h"

using namespace std;

//TODO: Figure out how to store different subclass types in an array

int main()
{
	/*Car myCar;
	myCar.changeOwner("Jonathan");
	myCar.setMake("Ford");
	myCar.setYear(2001);
	myCar.setPetrol(3);
	myCar.setTankSize(8.79877);
	myCar.setMpg(38);
	myCar.display();*/


	/*TurboCar myCar;
	myCar.changeOwner("Dave");
	myCar.setMake("Porsche");
	myCar.setYear(2012);
	myCar.setPetrol(5);
	myCar.setTankSize(6);
	myCar.setMpg(12);
	myCar.display();*/


	FamilyCar myCar;
	myCar.changeOwner("Susan");
	myCar.setMake("Suzuki");
	myCar.setYear(2009);
	myCar.setPetrol(12);
	myCar.setTankSize(11);
	myCar.setMpg(25);
	myCar.display();


	//You can declare an array of pointers, with the base class type
	//You can then use a derived type with new
	//Make sure to use -> operator on methods/property setting
	Car* carsPtr[3];
	carsPtr[0] = new FamilyCar;
	carsPtr[0]->changeOwner("Susan");
	carsPtr[0]->setMake("Suzuki");
	carsPtr[0]->setYear(2009);
	carsPtr[0]->setPetrol(12);
	carsPtr[0]->setTankSize(11);
	carsPtr[0]->setMpg(25);
	carsPtr[0]->display();

	carsPtr[1] = new Car;
	carsPtr[1]->changeOwner("Jonathan");
	carsPtr[1]->setMake("Ford");
	carsPtr[1]->setYear(2001);
	carsPtr[1]->setPetrol(3);
	carsPtr[1]->setTankSize(8.79877);
	carsPtr[1]->setMpg(38);
	carsPtr[1]->display();

	carsPtr[2] = new TurboCar;
	carsPtr[2]->changeOwner("Dave");
	carsPtr[2]->setMake("Porsche");
	carsPtr[2]->setYear(2012);
	carsPtr[2]->setPetrol(5);
	carsPtr[2]->setTankSize(6);
	carsPtr[2]->setMpg(12);
	carsPtr[2]->display();


	
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