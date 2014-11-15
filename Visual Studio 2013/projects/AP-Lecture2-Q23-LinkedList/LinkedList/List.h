// Version: V1.0
// Date: 14-11-14
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
	int add(int x);
	void display();
	int remove(int value);
	int clear();
};

#endif