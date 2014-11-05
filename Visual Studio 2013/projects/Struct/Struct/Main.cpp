#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Position
{
	int x;
	int y;
	double size;
};

void showPosition(Position p)
{
	cout << "\nx: " << p.x << " y: " << p.y << " Size: " << p.size << "\n";
}

int main()
{
	Position myPosition;
	myPosition.x = 10;
	myPosition.y = 25;
	myPosition.size = 125.50;

	Position myPositions[10];
	myPositions[0].x = 5;
	myPositions[0].y = 10;
	myPositions[0].size = 15.8;
	myPositions[1].x = 6;
	myPositions[1].y = 8;
	myPositions[1].size = 7.2;
	myPositions[2].x = 9;
	myPositions[2].y = 7;
	myPositions[2].size = 22.8;

	Position myOtherPosition = { 11, 8, 24.6 };

	showPosition(myPosition);
	showPosition(myPositions[0]);
	showPosition(myPositions[1]);
	showPosition(myPositions[2]);
	showPosition(myOtherPosition);
}