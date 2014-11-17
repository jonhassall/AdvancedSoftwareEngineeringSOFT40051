// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 6 - Q38

// Definition - Car.h

class Car
{
	//Use protected to make variables available privately to subclasses
	//If you used private, they would only be available to the base class
protected:
	char* makePtr; //Pointer to memory address for storage of make of car
	char* ownerPtr; //Pointer to memory address for storage of owner name of car

	int year; //Year of manufacture
	double petrol; //Currently stored petrol in gallons
	double tankSize; //Size of tank in gallons
	double mpg; //Miles per gallon fuel consumption
	
	void empty();
	void full();
	void showGraphic();

public:
	Car();

	Car(char make[], int year, double petrol, double tankSize, double mpg, char owner[]);

	~Car(); //Destructor to clean up memory heap

	virtual void display(); //Display information about car

	double fillPetrol(double gallons);

	double drive(double distance);

	void changeOwner(char owner[]);

	void displayOwner();

	void setMake(char make[]);

	void displayMake();

	void setYear(int year);

	void setPetrol(double petrol);

	void setTankSize(double tankSize);

	void setMpg(double mpg);

	double getRange();
};