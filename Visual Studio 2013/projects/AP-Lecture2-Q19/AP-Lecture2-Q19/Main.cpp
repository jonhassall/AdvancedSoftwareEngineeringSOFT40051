// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 19
// Note: I considered returning an array or a struct(?) as the question says 'return' but it would change the prototype

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

//Function prototype
void computeCircle(float& a, float& c, float& r);

int main()
{
	float a;
	float c;
	float r = 5;

	computeCircle(a, c, r);
	
	cout << left << setw(15) << "Area: "
		<< a << "\n"
		<< setw(15) << "Circumference: "
		<< c << endl;
}

void computeCircle(float& a, float& c, float& r)
{
	//Area A=πr2
	a = M_PI * pow(r, 2);

	//Circumference C=2πr
	c = 2 * M_PI * r;
}

/*struct COMPUTEDCIRCLE {
	float a;
	float c;
};*/