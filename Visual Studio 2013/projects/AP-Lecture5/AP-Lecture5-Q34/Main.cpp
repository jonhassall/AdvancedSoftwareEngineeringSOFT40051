// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 5 - Q34

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Write a program which dynamically allocates memory to store a person's name
	//(one or more names separated by spaces) typed in by the user and then displays
	//it on the screen

	char* namePtr;
	char temp[128];

	cout << "Please enter your full name.\n";
	cin.getline(temp, 128);

	//Remember +1 to account for the \0 character at the end of input
	namePtr = new char[strlen(temp) + 1];
	if (namePtr == 0)
	{
		cerr << "Error allocating memory.\n";
		return 1;
	}

	for (int i = 0; i < strlen(temp) + 1; i++)
	{
		namePtr[i] = temp[i];
	}

	cout << namePtr << endl;

	namePtr = NULL;
	delete namePtr;

	return 0;
}