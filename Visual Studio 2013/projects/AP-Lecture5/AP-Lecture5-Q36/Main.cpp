// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 5 - Q36

#include <iostream>
#include <string>

using namespace std;


//Function prototype
void displayNames(char** names, int linesCount);

int main()
{
	//Q36: Modify the code from Q35 by writing a function displayNames to
	//display all of the names. Pass the array of names ot the function as a pointer of type
	//char**.

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

	displayNames(namePtr, 10);

	for (int i = 0; i < 10; i++)
	{
		namePtr[i] = NULL;
		delete namePtr[i];
	}

	return 0;
}

void displayNames(char** names, int linesCount)
{
	for (int i = 0; i < linesCount; i++)
	{
		cout << "Name #" << (i + 1) << ":  " << names[i] << endl;
	}
}