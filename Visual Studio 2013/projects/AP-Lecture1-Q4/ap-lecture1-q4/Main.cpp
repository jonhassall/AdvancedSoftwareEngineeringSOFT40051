// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 1 - Question 4

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int i = 32; i <= 127; i++)
	{
		cout << i << ": " << static_cast<char>(i) << "\n";
	}
}