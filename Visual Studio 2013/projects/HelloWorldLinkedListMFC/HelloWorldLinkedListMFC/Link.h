// Version: V1.0
// Date: 14-11-14
// Name: Jonathan Hassall

#if !defined(LINK_h_INCLUDED)
#define LINK_h_INCLUDED

class Link
{
	friend class List;
private:
	char* X;	//Object stored
	Link* Next;	//Pointer to next object

public:
	//See later how to access and modify data
	Link(char*);
};

#endif