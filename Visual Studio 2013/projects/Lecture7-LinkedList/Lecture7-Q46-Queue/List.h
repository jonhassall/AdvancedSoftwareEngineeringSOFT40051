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
	
	void enqueue(int x);
	void dequeue();
	int getSize();

	void display();
	int get();
	int remove(int value);
	int clear();
};

#endif