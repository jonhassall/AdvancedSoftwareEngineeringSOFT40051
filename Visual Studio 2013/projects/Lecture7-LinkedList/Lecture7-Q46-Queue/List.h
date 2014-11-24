// Version: V1.0
// Date: 21-11-14
// Name: Jonathan Hassall

#if !defined(LIST_h_INCLUDED)
#define LIST_h_INCLUDED

#include "Link.h"

class List
{
private:
	Link* head;
	Link* tail;

public:
	List();
	~List();
	
	bool enqueue(int x);
	int dequeue();
	int front();
	int size();

	void display();
	bool removeByValue(int value);
	int clear();

	

	bool isEmpty();
};

#endif