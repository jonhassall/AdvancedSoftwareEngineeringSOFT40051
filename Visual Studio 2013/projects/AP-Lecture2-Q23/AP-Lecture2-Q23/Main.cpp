// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 23

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

//Function prototype
int remove(int a[], int& n, int x);
int removeElement(int a[], int pos);

int main()
{
	int a[10] = { 1, 1, 1, 2, 2, 2, 3, 3, 3, 4 };
	int n = 10;
	int x = 2;

	remove(a, n, x);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " | ";
	}
}

//a: Input array
//n: Search the first n elements of the array
//x: Value to search for

int remove(int a[], int& n, int x)
{
	bool found = false;

	for (int i = 0; i < n; i++)
	{
		//If match found, shift array elements upward, reduce size, and decrement cursor
		if (a[i] == x)
		{
			//cout << "Match at " << i << "\n";
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			i--;
			n--;

			found = true;
		}
	}

	switch (found)
	{
		case true:
			return 1;
		break;

		case false:
			return 0;
		break;
	}
	
}