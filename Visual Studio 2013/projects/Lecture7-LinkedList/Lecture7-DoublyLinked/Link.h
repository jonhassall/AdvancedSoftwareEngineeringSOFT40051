// Version: V1.0
// Date: 23-11-14
// Name: Jonathan Hassall

#if !defined(LINK_h_INCLUDED)
#define LINK_h_INCLUDED

class Link
{
	friend class List;

private:
	int x;	//Data to store
	Link* next;	//Pointer to next object
	Link* prev; //Pointer to prev object

public:
	Link(int);
};

#endif