// File: main.cpp
// Version: V1.0
// Date: 17-11-14
// Name: Jonathan Hassall
// Lecture 5 - Q37

#include <iostream>
#include <string>

using namespace std;


//Function prototype
void displayNames(char** names, int linesCount);

int main()
{
	//Q37: Now modify the program from question 36 to allow the user to enter the total
	//number of names initially and then allocate the array of pointers dynamically
	//using a pointer of type char**

	//** is an array of pointers or pointers to pointers

	cout << "Please enter the number of names you wish to enter:\n";
	int linesCount;
	cin >> linesCount;

	if (linesCount < 0)
	{
		cerr << "You did not enter a valid number. Ending.\n";
		return 1;
	}

	char** namePtrArray = new char*[linesCount];

	//Moved first getline here, to ignore leftover input
	char temp[128];
	cin.getline(temp, 128);

	for (int i = 0; i < linesCount; i++)
	{
		cout << "Please enter name #" << (i + 1) << ":\n";

		cin.getline(temp, 128);

		//Remember +1 to account for the \0 character at the end of input
		namePtrArray[i] = new char[strlen(temp) + 1];

		if (namePtrArray[i] == 0)
		{
			cerr << "Error allocating memory.\n";
			return 1;
		}

		for (int j = 0; j < strlen(temp) + 1; j++)
		{
			namePtrArray[i][j] = temp[j];
		}
	}

	displayNames(namePtrArray, linesCount);

	for (int i = 0; i < linesCount; i++)
	{
		namePtrArray[i] = NULL;
		delete namePtrArray[i];
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