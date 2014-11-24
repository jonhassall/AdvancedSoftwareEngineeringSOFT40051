// Version: V1.0
// Date: 23-11-14
// Name: Jonathan Hassall

#if !defined(LIST_h_INCLUDED)
#define LIST_h_INCLUDED

#include "Link.h"

class List
{
private:
	Link* head;

public:
	List();
	~List();
	int push(int x);
	void display();
	int removeByValue(int value);
	int removeByIndex(int index);
	int clear();
	int pop();
	int size();
	int top();
	
	bool isEmpty();

};

#endif