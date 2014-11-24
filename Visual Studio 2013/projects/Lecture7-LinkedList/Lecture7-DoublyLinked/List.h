// Version: V1.0
// Date: 23-11-14
// Name: Jonathan Hassall

#if !defined(LIST_h_INCLUDED)
#define LIST_h_INCLUDED

#include "Link.h"

class List
{
private:
	Link* head; //Front of doubly linked list
	Link* tail; //End of doubly linked list

public:
	List();
	~List();
	
	void display();
	void displayBackward();
	int size();
	int top();
	int clear();
	bool isEmpty();
	int removeByValue(int value);
	int pop();
	int add(int x);
	int push(int x);
};

#endif