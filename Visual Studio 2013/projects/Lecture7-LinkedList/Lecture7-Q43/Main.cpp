// File: Main.cpp
// Version: V1.0
// Date: 23-11-14
// Name: Jonathan Hassall

#include <iostream>
#include "Link.h"
#include "List.h"

using namespace std;

//Linked list in stack 'mode' / last-in-first-out
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
	}
	list.display();
	
	cout << "Top: " << list.top() << "\n";

	cout << "List size: " << list.size() << "\n";

	// Should output 5, 4, 3, 2, 1 
	// in this example.
	cout << endl;

	if (list.isEmpty() == true)
	{
		cout << "List is empty.\n";
	}
	else
	{
		cout << "List is not empty.\n";
	}

	int removeInput;

	cout << "Enter a value to remove:\n";
	cin >> removeInput;

	// Should output 5, 4, 2, 1 
	// in this example.
	if (list.removeByValue(removeInput) == 1)
	{
		cout << "Value has been removed.\n";
	}
	else
	{
		cout << "Value was not found.\n";
	}

	list.display();
	cout << "Top: " << list.top() << "\n";
	cout << "List size: " << list.size() << "\n";
	cout << "Pop: " << list.pop() << "\n";
	
	//Remove by index
	cout << "Removing by index. Display before:\n";
	list.display();
	list.removeByIndex(2);
	cout << "Display after:\n"; 
	list.display();
	cout << "List size: " << list.size() << "\n";
	
	cout << endl;
	
	return 0;
}