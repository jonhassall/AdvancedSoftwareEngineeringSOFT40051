// File: Main.cpp
// Version: V1.0
// Date: 23-11-14
// Name: Jonathan Hassall

#include <iostream>
#include "Link.h"
#include "List.h"

using namespace std;

//Doubly-linked list

//This list can display forward and backward in constant time i.e. it is as efficient
//displaying in forward order as it is in reverse order
//And it stays efficient no matter how big the list is
//'Big-O' notation is useful for describing the efficiency of an algorithm vs dataset size
//Performance searching/deleting an item is still going to grow in proportion to the size of the input data set
//Look to something like a B-Tree to maintain efficiency there
int main()
{
	List list;
	// 5 objects created using a 'for' loop 
	// and calling the ‘add’ function

	if (list.isEmpty() == true)
	{
		cout << "List is empty.\n";
	}
	else
	{
		cout << "List is not empty.\n";
	}

	for (int i = 1; i <= 5; i++)
	{
		list.push(i);
		//list.add(i);
	}
	if (list.isEmpty() == true)
	{
		cout << "List is empty.\n";
	}
	else
	{
		cout << "List is not empty.\n";
	}

	list.display();
	list.displayBackward();
	
	cout << "List size: " << list.size() << "\n";

	cout << "Popping...\n";
	cout << list.pop() << endl;

	list.display();
	list.displayBackward();

	cout << "List size: " << list.size() << "\n";

	cout << "Removing by value...\n";
	cout << list.removeByValue(3) << endl;
	//cout << list.removeByValue(2) << endl;

	list.display();
	list.displayBackward();

	cout << "List size: " << list.size() << "\n";

	cout << "Display again...\n";
	list.display();
	list.displayBackward();

	cout << "List size: " << list.size() << "\n";


	return 1;
}