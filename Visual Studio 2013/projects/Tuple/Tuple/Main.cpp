// File: Main.cpp
// Version: V1.0
// Date: 14-11-14
// Name: Jonathan Hassall

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

/*
Tuples are objects that pack elements of -possibly- different types together in a single object, just like pair objects do for pairs of elements, but generalized for any number of elements.

Conceptually, they are similar to plain old data structures (C-like structs) but instead of having named data members, its elements are accessed by their order in the tuple.
*/
int main()
{
	//Make a new tuple
	tuple<int, char, int> myTuple(10, 'x', 20);

	tuple<char, char, char> myTuple2('a', 'b', 'c');

	//Get values for tuple
	cout << get<0>(myTuple);
	cout << "\n";
	cout << get<1>(myTuple);
	cout << "\n";
	cout << get<2>(myTuple);
	cout << "\n";
	//Set new value for tuple element
	get<2>(myTuple) = 30;
	cout << get<2>(myTuple);
	cout << "\n";

	cout << "mytuple has ";
	cout << std::tuple_size<decltype(myTuple)>::value;
	cout << " elements." << '\n';

	cout << "mytuple2 has ";
	cout << std::tuple_size<decltype(myTuple2)>::value;
	cout << " elements." << '\n';

	//Concatenate two tuples
	auto myauto = std::tuple_cat(myTuple, myTuple2);
	cout << "myauto has ";
	cout << std::tuple_size<decltype(myauto)>::value;
	cout << " elements." << '\n';


	return 0;
}