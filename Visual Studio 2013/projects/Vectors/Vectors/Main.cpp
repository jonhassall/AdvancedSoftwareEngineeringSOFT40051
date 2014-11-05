// File: main.cpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	//Great tutorial here: http://www.mochima.com/tutorials/vectors.html

	vector<int> values(5);      // Declares a vector of 5 integers
	
	//Use vector<int>::size_type as type for incrementing variable, not int
	for (vector<int>::size_type i = 0; i < 5; i++)
	{
		values[i] = i;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << "\n";
	}


	vector<double> grades(10);  // Declares a vector of 10 doubles
	for (vector<double>::size_type i = 0; i < 10; i++)
	{
		grades[i] = double(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << grades[i] << "\n";
	}


	vector<string> names;        // Declares a vector of strings, initially empty
	
	//Add strings, resizing as we go
	for (vector<string>::size_type i = 0; i < 10; i++)
	{
		names.resize(i + 1);
		names[i] = "MyValue";
	}
	//Add another 10 strings, this time using push_back to append to the end of the vector
	for (vector<string>::size_type i = 10; i < 20; i++)
	{
		names.push_back("MyValue push_back");
	}
	//Insert a value part-way into the vetor
	names.insert(names.begin() + 5, "MyValue insert");
	//Erase an element from the vector
	names.erase(names.begin() + 1);
	//Show the contents of the vector
	for (vector<string>::size_type i = 0; i < names.size(); i++)
	{
		cout << names[i] << "\n";
	}
	
	vector<string>::iterator myIterator;
	for (myIterator = names.begin(); myIterator != names.end(); myIterator++)
	{
		cout << *myIterator << " ";
	}

	for (vector<string>::iterator n = names.begin(); n != names.end(); ++n)
	{
		cout << "Name: " << *n << "\tLength: " << n->length() << endl;
	}

	//Delete the first two elements
	names.erase(names.begin(), names.begin() + 2);

	//Sort
	sort(names.begin(), names.end());
	//Reverse order
	reverse(names.begin(), names.end());
	//Random shuffle
	random_shuffle(names.begin(), names.end());



	//Multidimensional array
	vector<vector<int>> vectorMultiDimensional;

	for (int i = 0; i < 10; i++) {
		vector<int> row; // Create an empty row
		for (int j = 0; j < 20; j++) {
			row.push_back(i * j); // Add an element (column) to the row
		}
		vectorMultiDimensional.push_back(row); // Add the row to the main vector
	}
}