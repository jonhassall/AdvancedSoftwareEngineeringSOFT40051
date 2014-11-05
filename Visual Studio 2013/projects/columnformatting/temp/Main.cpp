// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 19

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	double bottles = 10;
	cout << "The total volume is " << 1000 * bottles << "\n";

	cout << left << setw(12) << "Bottles: " 
		<< setw(12) << 10 << "\n" 
		<< setw(12) << "Cans: " 
		<< setw(12) << 20 << endl;
	return(1);
}