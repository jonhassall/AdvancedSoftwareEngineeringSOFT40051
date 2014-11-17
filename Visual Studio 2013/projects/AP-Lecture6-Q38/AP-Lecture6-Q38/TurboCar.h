// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38

// Definition - TurboCar.h

class TurboCar : public Car
{
protected:
	int turbosInstalled = 1; //Whether turbo has been installed or not
	double turboMilesCovered = 0; //Miles covered with turbo

public:
	void dirtBag();

	void display(); //Display information about car

	double drive(double distance); //Drive the car. Also stores information to turboMilesCovered, and ulilises parent method
};