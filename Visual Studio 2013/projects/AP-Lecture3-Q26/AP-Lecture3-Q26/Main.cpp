// File: main.cpp
// Version: V1.0
// Date: 24-10-2014
// Name: Jonathan Hassall
// Lecture 3 - Question 26

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Read one line of text
	cout << "Please enter some text:\n";
	char textLine[128];
	cin.getline(textLine, sizeof(textLine), '\n');

	cout << "You entered: " << textLine << "\n";
	
	int vowelCount = 0;

	int i = 0;
	while (i < sizeof(textLine) && textLine[i] != '\0')
	{
		switch (textLine[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			vowelCount++;
			break;
		}
		i++;
	}

	cout << vowelCount << " vowels were found.";
	cout << "\n";
	return 0;
}