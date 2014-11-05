// File: main.cpp
// Version: V1.0
// Date: 24-10-2014
// Name: Jonathan Hassall
// Lecture 3 - Question 28 Star
// Write a program that reads one line of text and displays a table showing the number
// of occurrences of words of each length from 1 to 20. (Words of length over 20 can
// be ignored.)

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Read one line of text
	cout << "Please enter some text:\n";
	char textLine[128];
	cin.getline(textLine, sizeof(textLine), '\n');

	cout << "You entered: " << textLine << "\n";

	int lengthCounts[128];
	bool wordStarted = false;
	int wordCharacterCount = 0;

	//Initialise array of counts to avoid crazy data
	for (int i = 0; i < 128; i++)
	{
		lengthCounts[i] = 0;
	}

	int i = 0;
	while (i < sizeof(textLine) && textLine[i] != '\0')
	{
		if (wordStarted == false && !isspace(textLine[i]))
		{
			wordStarted = true;
			wordCharacterCount = 0;
		}

		if (!isspace(textLine[i]))
		{
			wordCharacterCount++;
		}

		if (isspace(textLine[i]))
		{
			wordStarted = false;
			lengthCounts[wordCharacterCount]++;
			wordCharacterCount = 0;
		}
		i++;
	}

	if (!isspace(textLine[i]))
	{
		lengthCounts[wordCharacterCount]++;
	}
	
	setfill(' ');

	cout << left << setw(10) << "Length:";
	cout << left << setw(10) << "Count:";
	cout << "\n";

	for (int i = 1; i <= 20; i++)
	{
		cout << left << setw(10) << i;
		cout << left << setw(10) << lengthCounts[i];
		cout << "\n";
	}

	cout << "\n";
	return 0;
}