#include <iostream>

using namespace std;

int main()
{
	int sum = 1 + 2 + 3 + 4;
	int count = 4;
	float average = sum / count;
	cout << average << "\n";

	average = float(sum) / count;
	cout << average << "\n";
}