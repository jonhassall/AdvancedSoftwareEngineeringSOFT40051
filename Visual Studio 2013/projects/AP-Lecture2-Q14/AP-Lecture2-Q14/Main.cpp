// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 14

#include <iostream>

using namespace std;

int main()
{
	//Number of lines required
	int n = 4;

	int current_width = 1;
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < current_width; j++)
		{
			cout << "*";
		}
		current_width++;
		cout << "\n";
	}
}