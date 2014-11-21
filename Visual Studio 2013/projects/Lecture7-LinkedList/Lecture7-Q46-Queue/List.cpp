// Version: V1.0
// Date: 21-11-14
// Name: Jonathan Hassall

#include <iostream>
#include "List.h"
#include "Link.h"

using namespace std;

List::List()
{
	head = 0;
	tail = 0;
}

List::~List()
{
	List::clear();
}

void List::display()
{
	Link *cursor;
	cursor = head;
	if (head == 0)
	{
		cout << "Nothing to display.\n";
	}
	else
	{
		while (cursor != 0)
		{
			cout << endl << cursor->x;
			cursor = cursor->next;
		}
	}

}

//Insert value at rear of the queue
void List::enqueue(int x)
{
	Link *temp;
	temp = new Link(x);

	temp->x = x;
	temp->next = 0;
	if (head == 0)
	{
		head = temp;
	}
	else
	{
		tail->next = temp;
	}

	tail = temp;
}

//Remove value from front of the queue, and return it
//Error if queue empty
void List::dequeue()
{
	Link *temp;

	if (head == 0)
	{
		cout << "Queue is empty.\n";
	}
	else
	{
		temp = head;
		head = head->next;
		cout << "The data dequeued is " << temp->x;
		delete temp;
	}
}

int List::getSize()
{
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
		head = head->prev;    	// Point head second object 
		delete temp;		// Free the memory
		// Again delete must come after temp has been used (to provide the prev link).
		return 1;
	}

	// Check the rest of the list
	for (current = head; current->prev != 0; current = current->prev)
	{
		if (current->prev->x == value)
		{ // Remove the object AFTER the one to which current points
			temp = current->prev;		// Point to one to remove
			current->prev = temp->prev;	// Make link to one after 
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
		head = head->prev;
		delete temp;
	}

	return 1;
}