// File: Main.cpp
// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Monkey.h"

using namespace std;

/*
TODO:
Investigate virtual keyword

*/
int main()
{
	Animal myAnimal = Animal();
	myAnimal.setName("Animal");
	myAnimal.showName();
	myAnimal.makeNoise();
	myAnimal.describeYourself();
	
	Animal myAnimal2 = Animal(12);
	//myAnimal2.showName();
	myAnimal2.showAge();
	myAnimal2.makeNoise();
	myAnimal2.describeYourself();

	Cat myCat = Cat();
	myCat.setName("Felix");
	myCat.showName();
	myCat.willScratchYou = true;
	myCat.antagonise();
	myCat.makeNoise();
	myCat.describeYourself();

	Cat myCat2 = Cat();
	myCat.setName("Bob");
	myCat.showName();
	myCat2.willScratchYou = false;
	myCat2.antagonise();
	myCat2.makeNoise();
	myCat2.describeYourself();

	Cat myCat3(22);
	myCat3.willScratchYou = false;
	myCat3.showAge();
	myCat3.antagonise();
	myCat3.makeNoise();
	myCat3.describeYourself();

	Monkey myMonkey(22);
	myMonkey.makeNoise();
	myMonkey.describeYourself();
}