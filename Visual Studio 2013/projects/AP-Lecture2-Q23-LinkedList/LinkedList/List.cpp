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
	for (temp = head; temp != 0; temp = temp->Next)
	{
		cout << "Value of object is " << temp->X << endl;
	}
}

int List::add(int x)
{
	// pointer 'temp' used to instantiate objects to add to list 
	Link* temp;

	// memory allocated and the object is given a value
	temp = new Link(x);
	if (temp == 0) // check new succeeded
	{
		return 0;  // shows error in memory allocation
	}
	// the pointer in the object is set to whatever 'head' is pointing to
	temp->Next = head;
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
	if (head->X == value)	// check first object
	{ // remove 1st element
		temp = head;	// point to one to remove 
		head = head->Next;    	// point head second object 
		delete temp;		// free the memory
		// Again delete must come after temp has been used (to provide the next link).
		return 1;
	}

	// check the rest of the list
	for (current = head; current->Next != 0; current = current->Next)
	{
		if (current->Next->X == value)
		{ // remove the object AFTER the one to which current points
			temp = current->Next;		// point to one to remove
			current->Next = temp->Next;	// make link to one after 
			delete temp;			// free the memory
			return 1;
		}
	}
	return 0;		// return value indicates whether successful
}

int List::clear() //Clear all objects from the list
{
	cout << "Clearing list.\n";
	Link* temp;
	while (head != 0)
	{
		//Remove first element
		temp = head;
		head = head->Next;
		delete temp;
	}

	return 1;
}