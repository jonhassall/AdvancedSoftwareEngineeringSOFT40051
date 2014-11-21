// Version: V1.0
// Date: 21-11-14
// Name: Jonathan Hassall

#if !defined(LINK_h_INCLUDED)
#define LINK_h_INCLUDED

class Link
{
	friend class List;

private:
	int x;	//Object stored
	Link* next;	//Pointer to next object
	Link* prev; //Pointer to previous object

public:
	Link(int);
};

#endif