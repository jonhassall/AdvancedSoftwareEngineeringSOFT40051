// File: Main.cpp
// Version: V1.0
// Date: 26-11-14
// Name: Jonathan Hassall

#include <iostream>
#include <cstdlib>
#include <list>
#include <forward_list>

using namespace std;

//List is doubly-linked list
void doublyLinkedList()
{
	cout << "Start of doubly linked list:\n";
	// constructors used in the same order as described above:
	list<int> first;                                // empty list of ints
	list<int> second(4, 100);                       // four ints with value 100
	list<int> third(second.begin(), second.end());  // iterating through second
	list<int> fourth(third);                       // a copy of third

	// the iterator constructor can also be used to construct from arrays:
	int myints[] = { 16, 2, 77, 29 };
	list<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

	cout << "The contents of fifth are: ";
	for (list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
		cout << *it << ' ';

	cout << '\n';
	cout << "End of doubly linked list.\n\n";
}

//Forward list is single linked list
void singleLinkedList()
{
	cout << "Start of single linked list:\n";
	forward_list<int> first;                      // default: empty
	forward_list<int> second(3, 77);              // fill: 3 seventy-sevens
	forward_list<int> third(second.begin(), second.end()); // range initialization
	forward_list<int> fourth(third);            // copy constructor
	forward_list<int> fifth(move(fourth));  // move ctor. (fourth wasted)
	forward_list<int> sixth = { 3, 52, 25, 90 };    // initializer_list constructor

	cout << "first:"; for (int& x : first)  cout << " " << x; cout << '\n';
	cout << "second:"; for (int& x : second) cout << " " << x; cout << '\n';
	cout << "third:";  for (int& x : third)  cout << " " << x; cout << '\n';
	cout << "fourth:"; for (int& x : fourth) cout << " " << x; cout << '\n';
	cout << "fifth:";  for (int& x : fifth)  cout << " " << x; cout << '\n';
	cout << "sixth:";  for (int& x : sixth)  cout << " " << x; cout << '\n';
	cout << "End of single linked list:\n\n";
}

//Linked and Doubly-linked list, using standard template
int main()
{
	doublyLinkedList();
	singleLinkedList();
	
	return 0;
}