// Version: V1.0
// Date: 14-11-14
// Name: Jonathan Hassall

#include <iostream>
#include "List.h"
#include "Link.h"

using namespace std;

List::List()
{
	// 'head' points to 0 initially and when the list is empty.  
	// Otherwise 'head' points to most recently 
	// added object head
	head = 0;
}

List::~List()
{
	List::clear();
}

void List::display()
{
	Link* temp;    // 'temp' used to iterate through the list
	// 'head' points to last object added
	// Iterate back through list until last pointer (which is 0)
	for (temp = head; temp != 0; temp = temp->next)
	{
		cout << "Value of object is " << temp->x << endl;
	}
}

int List::add(int x)
{
	// Pointer 'temp' used to instantiate objects to add to list 
	Link* temp;

	// Memory allocated and the object is given a value
	temp = new Link(x);
	if (temp == 0) // check new succeeded
	{
		return 0;  // shows error in memory allocation
	}
	// The pointer in the object is set to whatever 'head' is pointing to
	temp->next = head;
	// 'head' is re-directed to point to the last created object
	head = temp;
	return 1;
}


int List::remove(int value)
{
	Link* temp;
	Link* current;
	if (head == 0)	// check for empty list 
	//Nothing to do
	{
		return 0;
	}

	// Same as inside loop in clear function
	if (head->x == value)	// check first object
	{ // Remove 1st element
		temp = head;	// Point to one to remove 
		head = head->next;    	// Point head second object 
		delete temp;		// Free the memory
		// Again delete must come after temp has been used (to provide the next link).
		return 1;
	}

	// Check the rest of the list
	for (current = head; current->next != 0; current = current->next)
	{
		if (current->next->x == value)
		{ // Remove the object AFTER the one to which current points
			temp = current->next;		// Point to one to remove
			current->next = temp->next;	// Make link to one after 
			delete temp;			// Free the memory
			return 1;
		}
	}
	return 0;		// Return value indicates whether successful
}

int List::clear() //Clear all objects from the list
{
	cout << "Clearing list.\n";
	Link* temp;
	while (head != 0)
	{
		//Remove first element
		temp = head;
		head = head->next;
		delete temp;
	}

	return 1;
}