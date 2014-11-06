// File: main.cpp

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	//Initialize random seed
	srand( int(time(NULL)) );

	int multiDimensional[3][5];

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			multiDimensional[x][y] = rand() % 100;
		}
	}

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cout << "x: " << x << " y: " << y << " Value: " << multiDimensional[x][y] << "\n";
		}
	}
}