// File: main.cpp
// Version: V1.0
// Date: 31-10-14
// Name: Jonathan Hassall
// Lecture 4 - Car

// Definition - Car.h

class Car
{

private:
	char* make; //Make of car
	int year; //Year of manufacture
	double petrol; //Currently stored petrol in gallons
	double tankSize; //Size of tank in gallons
	double mpg; //Miles per gallon fuel consumption
	char* owner; //Owner name of car

	void empty();
	void full();
	void showGraphic();

public:
	Car();

	Car(char make[], int year, double petrol, double tankSize, double mpg, char owner[]);

	void display(); //Display information about car

	double fillPetrol(double gallons);

	double drive(double distance);

	void changeOwner(char owner[]); //Note that char owner[] is syntactic sugar for char* owner

	void setMake(char make[]); //Note that char make[] is syntactic sugar for char* make

	void setYear(int year);

	void setPetrol(double petrol);

	void setTankSize(double tankSize);

	void setMpg(double mpg);

	double getRange();
};