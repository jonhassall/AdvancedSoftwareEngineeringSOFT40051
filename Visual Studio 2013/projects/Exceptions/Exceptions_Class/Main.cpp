// File: Main.cpp
// Version: V1.0
// Date: 26-11-14
// Name: Jonathan Hassall

#include <stdio.h>
#include <stdlib.h>
#include <exception>
#include <iostream>

//Exceptions
//This example defines a custom exception class extending the standard exception class
//Override the 'what' method. Similar to getMessage() you may be used to in other languages

using namespace std;

class DivideByZeroException : public exception
{
	virtual const char* what() const throw()
	{
		return "Division by zero exception";
	}
};

double divide(double a, double b)
{
	if (a == 0 || b == 0)
	{
		throw DivideByZeroException();
	}
	return a / b;
}
int main(int argc, char *argv[]) {

	try
	{
		divide(10, 0);
	}
	catch (exception& e)
	{
		cout << "An exception occured: " << e.what() << "\n";
	}
	return 0;
}