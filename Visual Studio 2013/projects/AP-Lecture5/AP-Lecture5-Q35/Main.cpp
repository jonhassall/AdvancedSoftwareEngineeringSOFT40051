// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 5 - Q35

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Q35: Modify the program from question 34 by delcaring an array of char*, called persArray,
	//So that 10 names can be stored in dynamically allocated memory and then displayed.
	//Allow the user to type in the names on separate lines, terminating with an empty line

	char* namePtr[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter name #" << (i + 1) << ":\n";

		char temp[128];

		cin.getline(temp, 128);

		//Remember +1 to account for the \0 character at the end of input
		namePtr[i] = new char[strlen(temp) + 1];

		if (namePtr[i] == 0)
		{
			cerr << "Error allocating memory.\n";
			return 1;
		}

		for (int j = 0; j < strlen(temp) + 1; j++)
		{
			namePtr[i][j] = temp[j];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "Name #" << (i + 1) << ":  " << namePtr[i] << endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		namePtr[i] = NULL;
		delete namePtr[i];
	}
	
	return 0;
}