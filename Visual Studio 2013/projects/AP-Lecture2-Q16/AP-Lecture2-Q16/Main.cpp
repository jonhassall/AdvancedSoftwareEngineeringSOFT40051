// File: main.cpp
// Version: V1.0
// Date: 15-10-2014
// Name: Jonathan Hassall
// Lecture 2 - Question 16

#include <iostream>

using namespace std;

//Function prototype
void showIt(int spaces, int stars, char c);
void triangle(int n, char c);

int main()
{
	triangle(3, 'X');
}

void showIt(int spaces, int stars, char c)
{
	int i;
	for (i = 0; i < spaces; i++)
	{
		cout << " ";
	}

	for (i = 0; i < stars; i++)
	{
		cout << c;
	}

	cout << "\n";
}

void triangle(int n, char c)
{
	int spaces;
	int stars;

	int i = 0;

	spaces = n - 1;
	stars = 1;

	for (i = 1; i <= n; i++)
	{
		showIt(spaces, stars, c);

		spaces = spaces - 1;
		stars = stars + 2;

		//cout << "Spaces: " << spaces << " Stars: " << stars;
	}

	spaces = 0;
	stars = (n * 2) - 1;

	for (i = n - 1; i > 0; i--)
	{
		//cout << "Spaces: " << spaces << " Stars: " << stars;

		spaces = spaces + 1;
		stars = stars - 2;

		showIt(spaces, stars, c);
	}
}