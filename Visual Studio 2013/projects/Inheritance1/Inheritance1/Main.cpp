// File: Main.cpp
// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Monkey.h"
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	Animal myAnimal = Animal();
	myAnimal.setName("Animal");
	myAnimal.showName();
	myAnimal.makeNoise();
	myAnimal.sayHelloTo("Dave");
	
	Animal myAnimal2 = Animal(12);
	//myAnimal2.showName();
	myAnimal2.showAge();
	myAnimal2.makeNoise();
	myAnimal2.sayHelloTo("Dave");

	Cat myCat = Cat();
	myCat.setName("Felix");
	myCat.showName();
	myCat.willScratchYou = true;
	myCat.antagonise();
	myCat.makeNoise();
	myCat.sayHelloTo("Dave");

	Cat myCat2 = Cat();
	myCat.setName("Bob");
	myCat.showName();
	myCat2.willScratchYou = false;
	myCat2.antagonise();
	myCat2.makeNoise();
	myCat2.sayHelloTo("Dave");

	Cat myCat3(22);
	myCat3.willScratchYou = false;
	myCat3.showAge();
	myCat3.antagonise();
	myCat3.makeNoise();
	myCat3.sayHelloTo("Dave");

	Monkey myMonkey(22);
	myMonkey.makeNoise();
	myMonkey.sayHelloTo("Dave");


	myMonkey.display(1);
	myMonkey.display("Hello");
	myMonkey.display(true);

	//Array of monkey objects
	Monkey myMonkeys[3];
	myMonkeys[0].setName("Monkey 1");
	myMonkeys[1].setName("Monkey 2");
	myMonkeys[2].setName("Monkey 3");
	myMonkeys[0].showName();
	myMonkeys[1].showName();
	myMonkeys[2].showName();

	//Create a tuple of different types of animals
	//Some difficulties using constructors with parameters however
	tuple<Animal, Monkey, Cat> myAnimalsTuple{ 1, 2, 3 };
	//tuple<Animal, Monkey, Cat> myAnimalsTuple{};
	get<0>(myAnimalsTuple).setName("Tuple Animal 1");
	get<1>(myAnimalsTuple).setName("Tuple Animal 2");
	get<2>(myAnimalsTuple).setName("Tuple Animal 3");
	get<0>(myAnimalsTuple).showName();
	get<1>(myAnimalsTuple).showName();
	get<2>(myAnimalsTuple).showName();
	get<0>(myAnimalsTuple).showAge();
	get<1>(myAnimalsTuple).showAge();
	get<2>(myAnimalsTuple).showAge();

	vector<Monkey> vectorMonkeys(5);      // Declares a vector of 5 monkeys
	for (vector<int>::size_type i = 0; i < 5; i++)
	{
		vectorMonkeys[i].setName("Vectormonkey");
	}
	for (int i = 0; i < 5; i++)
	{
		vectorMonkeys[i].showName();
	}

	//Array of pointers with same base class type
	//Remember to use -> on operators/methods/properties
	Animal * animalsList[3];
	animalsList[0] = new Monkey();
	animalsList[0]->setName("Array monkey");
	animalsList[1] = new Cat();
	animalsList[1]->setName("Array cat");
	animalsList[2] = new Animal();
	animalsList[2]->setName("Array animal");

	for (int i = 0; i < 2; i++)
	{
		animalsList[i]->showName();
	}

}