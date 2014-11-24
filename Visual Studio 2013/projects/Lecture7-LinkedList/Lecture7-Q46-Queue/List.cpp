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


bool List::removeByValue(int value)
{
	Link* temp;
	Link* current;
	if (List::isEmpty() == true)
		//if (head == 0)	// check for empty list 
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

//Insert value at rear of the queue
bool List::enqueue(int x)
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

	return true;
}

//Remove value from front of the queue, and return it
//Error if queue empty
int List::dequeue()
{
	Link *temp;

	int tempX;

	if (isEmpty())
	{
		//Queue is empty
		return 0;
	}
	else
	{
		temp = head;
		head = head->next;
		tempX = temp->x;
		delete temp;
	}

	return tempX;
}


//Get the size of the list
int List::size()
{
	int counter = 0;

	Link *cursor;
	cursor = head;
	if (head == 0)
	{
		return counter;
	}
	else
	{
		while (cursor != 0)
		{
			cursor = cursor->next;
			counter++;
		}
	}

	return counter;
}

//Get, but don't remove, the value of the item at the front of the queue
int List::front()
{
	Link *temp;

	int tempX;

	if (isEmpty())
	{
		//Queue is empty
		return 0;
	}
	else
	{
		temp = head;
		tempX = temp->x;
	}

	return tempX;
}

//Returns true if stack is empty
bool List::isEmpty()
{
	if (head == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
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

	head = 0;
	tail = 0;

	return 1;
}