#include <iostream>
#include "Pen.h"

using namespace std;

int testFunction()
{
	//Pen * MyPen3 = new Pen();
	//delete MyPen3;

	Pen MyPen;
	Pen MyPen2(12345);

	MyPen.write(12345);
	MyPen.store(55555);
	MyPen.outputStored();
	cout << "\nThis was run in Main.cpp: " << MyPen.outputStoredByReturn() << "\n";

	MyPen.callMyself2();

	return(1);
}
int main()
{
	testFunction();
}