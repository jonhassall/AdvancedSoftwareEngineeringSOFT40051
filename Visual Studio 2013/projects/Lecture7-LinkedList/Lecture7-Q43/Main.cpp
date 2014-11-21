// File: Main.cpp
// Version: V1.0
// Date: 14-11-14
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

	for (int i = 1; i <= 5; i++)
	{
		list.add(i);
	}
	list.display();
	// Should output 5, 4, 3, 2, 1 
	// in this example.
	cout << endl;

	int removeInput;

	cout << "Enter a value to remove:\n";
	cin >> removeInput;

	// Should output 5, 4, 2, 1 
	// in this example.
	if (list.remove(removeInput) == 1)
	{
		cout << "Value has been removed.\n";
	}
	else
	{
		cout << "Value was not found.\n";
	}

	list.display();

	cout << endl;
	
	return 0;
}