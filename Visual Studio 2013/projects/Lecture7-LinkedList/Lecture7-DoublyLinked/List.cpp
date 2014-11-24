// Version: V1.0
// Date: 23-11-14
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
	head = NULL;
	tail = NULL;
}

List::~List()
{
	List::clear();
}

void List::display()
{
	cout << "Display forward...\n";
	Link* temp;    // 'temp' used to iterate through the list
	// 'head' points to last object added
	// Iterate back through list until last pointer (which is 0)
	for (temp = head; temp != NULL; temp = temp->next)
	{
		cout << "Value of object is " << temp->x << endl;
	}
}

void List::displayBackward()
{
	cout << "Display backward...\n";
	Link* temp;    // 'temp' used to iterate through the list
	
	// Same as display, but in reverse
	// Still efficient, thanks to the prev pointers

	cout << tail->x;

	for (temp = tail; temp != NULL; temp = temp->prev)
	{
		cout << "Value of object is " << temp->x << endl;
	}
}

//Return the value of the top of the stack
int List::top()
{
	if (!isEmpty())
	{
		return head->x;
	}
	else
	{
		return false;
	}
}

//Remove top item from stack and return it
int List::pop()
{
	//Check if empty
	if (isEmpty())
	{
		return 0;
	}

	Link* temp;
	Link* current;

	int tempX;
	tempX = head->x;

	temp = head;	// Point to one to remove 
	head = head->next;    	// Point head second object
	head->prev = NULL;
	
	delete temp;		// Free the memory
	// Again delete must come after temp has been used (to provide the next link).
	return tempX;
}

//Get size of stack
int List::size()
{
	int counter = 0;

	if (isEmpty())
	{
		return counter;
	}

	Link* temp;    // 'temp' used to iterate through the list
	// 'head' points to last object added
	// Iterate back through list until last pointer (which is 0)
	for (temp = head; temp != 0; temp = temp->next)
	{
		counter++;
	}
	
	return counter;
}


//Returns true if stack is empty
bool List::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int List::removeByValue(int value)
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
		cout << "Removing first element...\n";
		//Works OK
		temp = head;	// Point to one to remove 
		head = head->next;    	// Point head second object 
		head->prev = NULL;

		if (size() == 1)
		{
			tail = head;
		}

		delete temp;	// Free the memory
		// Again delete must come after temp has been used (to provide the next link).
		return 1;
	}

	// Check the rest of the list
	for (current = head; current->next != NULL; current = current->next)
	{
		cout << ".";
		if (current->next->x == value)
		{
			// Remove the object AFTER the one to which current points
			temp = current->next;

			current->next = temp->next;

			cout << "Flag2\n";
			Link* temp2;
			temp2 = temp->next;
			temp2->prev = current;

			delete temp;	// Free the memory
			return 1;
		}
	}

	return 0;	// Return value indicates whether successful
}

int List::clear() //Clear all objects from the list
{
	cout << "Clearing list.\n";
	Link* temp;
	while (head != NULL)
	{
		//Remove first element
		temp = head;
		head = head->next;
		delete temp;
	}

	tail = NULL;

	return 1;
}

//Push an entry onto the start of the stack
int List::push(int x)
{
	// Pointer 'temp' used to instantiate objects to add to list 
	Link* temp;

	// Memory allocated and the object is given a value
	temp = new Link(x);
	if (temp == NULL) // check new succeeded
	{
		return 0;  // shows error in memory allocation
	}

	if (head == NULL)
	{
		//If list is empty
		head = temp;
		tail = temp;
		temp->prev = NULL;
		temp->next = NULL;
	}
	else
	{
		head->prev = temp;
		temp->next = head;
		temp->prev = NULL;
		head = temp;
	}
	
}