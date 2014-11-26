// File: Main.cpp
// Version: V1.0
// Date: 26-11-14
// Name: Jonathan Hassall

#include <stdio.h>
#include <stdlib.h>
#include <exception>
#include <iostream>

//Exceptions
//This example throws a simple exception, which is caught by a handler with the same parameter signature

using namespace std;

double divide(double a, double b)
{
	if (a == 0 || b == 0)
	{
		throw 123;
	}
	return a / b;
}
int main(int argc, char *argv[]) {

	try
	{
		divide(10, 0);
	}
	catch (int e)
	{
		cout << "An exception occured, code: " << e << "\n";
	}
	return 0;
}