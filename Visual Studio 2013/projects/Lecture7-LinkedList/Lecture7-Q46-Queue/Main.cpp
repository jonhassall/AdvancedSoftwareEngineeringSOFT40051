// File: Main.cpp
// Version: V1.0
// Date: 21-11-14
// Name: Jonathan Hassall

#include <iostream>
#include "Link.h"
#include "List.h"

using namespace std;

int main()
{
	List list;
	// 5 objects created using a 'for' loop 
	// and calling the ‘enqueue’ function

	for (int i = 1; i <= 5; i++)
	{
		//list.add(i);
		list.enqueue(i);
	}
	list.display();
	// Should output 5, 4, 3, 2, 1 
	// in this example.
	cout << endl;
	cout << "Size: " << list.size() << "\n";
	cout << "Dequeue: " << list.dequeue() << "\n";

	list.display();
	cout << endl;
	cout << "Size: " << list.size() << "\n";
	cout << "Front: " << list.front() << "\n";

	list.display();

	int removeInput;

	cout << "\nEnter a value to remove:\n";
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
	
	cout << endl;
	cout << "Size: " << list.size() << "\n";
	cout << "Front: " << list.front() << "\n";
	list.display();
	cout << endl;

	return 0;
}