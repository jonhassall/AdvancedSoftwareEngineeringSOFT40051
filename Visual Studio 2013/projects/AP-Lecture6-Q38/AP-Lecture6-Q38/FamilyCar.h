// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38

// Definition - FamilyCar.h

class FamilyCar : public Car
{
protected:
	int DVDInstalled = 1; //Whether DVD player has been installed

public:
	void display(); //Display information about car
};