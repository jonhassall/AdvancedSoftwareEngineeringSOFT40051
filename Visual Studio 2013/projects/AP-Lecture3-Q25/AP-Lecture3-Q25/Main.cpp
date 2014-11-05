// File: main.cpp
// Version: V1.0
// Date: 24-10-2014
// Name: Jonathan Hassall
// Lecture 3 - Question 25

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

	cout << "Showing with spaces removed:\n";

	int i = 0;
	while (i < sizeof(textLine) && textLine[i] != '\0')
	{
		//Two possible methods, isspace and character comparison

		if (!isspace(textLine[i]))
		//if (textLine[i] != ' ')
		{
			cout << textLine[i];
		}
		else
		{
			//Space removed
		}

		i++;
	}

	cout << "\n";
	return 0;	
}