#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h> 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//#include <iomainip>

using namespace std;


int MAGICNUMBER;
int MAGICNUMBERMAX = 20;
int guessCount = 0;
bool guessed = false;
int guess;

void showClues()
{
	//Odd
	if (MAGICNUMBER % 2 == 1)
	{
		cout << "Clue: The number is odd.\n";
	}
	//Even
	if (MAGICNUMBER % 2 == 0)
	{
		cout << "Clue: The number is even.\n";
	}
	//Prime
	int count = 0;
	for (int i = 2; i < MAGICNUMBER; i++)
	{
		if (MAGICNUMBER % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Clue: The number is prime.\n";
	}
	else
	{
		cout << "Clue: Not a prime number.\n";
	}
	//Square
	//Generate each square, up to the maximum value
	/*bool maxHit = false;
	while (maxHit = false)
	{
		int square = 
	}*/


}

int main()
{
	srand(time(0));
	MAGICNUMBER = rand() % MAGICNUMBERMAX + 1;

	cout << MAGICNUMBER;
	cout << "";
	//in_file.open('Title.txt'.c_str());

	string line;
	ifstream myfile("Title.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else
	{
		cout << "Unable to open file";
	}

	cout << "Guess the magic number!\n";
	showClues();

	while (guessed == false)
	{
		cout << "Enter your guess: ";
		cin >> guess;
		guessCount++;

		if (guess == MAGICNUMBER)
		{
			guessed = true;
		}
		else
		{
			cout << "Incorrect.\n";
			//Hot or cold
			double difference = guess - MAGICNUMBER;
			difference = fabs(difference);
			//cout << "The magic number is " << MAGICNUMBER << " and difference was " << difference << "\n";
			double differencePercent = (difference / MAGICNUMBERMAX) * 100;
			//cout << "Difference percent = " << differencePercent;

			if (differencePercent <= 5)
			{
				cout << "Hot! Less than 5% difference between your guess and the magic number.\n";
			}
			else if (differencePercent < 20)
			{
				cout << "Warm! Less than 20% difference between your guess and the magic number.\n";
			}
			else
			{
				cout << "Cold! Way out.\n";
			}
		}
	}

	cout << "Correct! You took " << guessCount << " guesses.\n";
	return 1;
}
