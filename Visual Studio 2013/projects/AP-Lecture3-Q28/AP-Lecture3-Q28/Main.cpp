// File: main.cpp
// Version: V1.0
// Date: 24-10-2014
// Name: Jonathan Hassall
// Lecture 3 - Question 27

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

	int wordCount = 0;
	int threeLetterWordCount = 0;
	bool wordStarted = false;
	int wordCharacterCount = 0;

	int i = 0;
	while (i < sizeof(textLine) && textLine[i] != '\0')
	{
		if (wordStarted == false && !isspace(textLine[i]))
		{
			wordStarted = true;
			wordCharacterCount = 0;
			wordCount++;
		}

		if (!isspace(textLine[i]))
		{
			wordCharacterCount++;
		}

		if (isspace(textLine[i]))
		{
			wordStarted = false;
			if (wordCharacterCount == 3)
			{
				threeLetterWordCount++;
			}
		}
		i++;
	}

	if (wordCharacterCount == 3)
	{
		threeLetterWordCount++;
	}

	cout << wordCount << " word(s) were found.\n";
	cout << threeLetterWordCount << " three letter word(s) were found.\n";
	cout << "\n";
	return 0;
}