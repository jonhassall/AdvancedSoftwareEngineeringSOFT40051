// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 17

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

//Function prototype
float area(float r);

int main()
{
	cout << area(5) << "\n";
}

float area(float r)
{
	float area;
	area = M_PI * pow(r, 2);
	return(area);
}