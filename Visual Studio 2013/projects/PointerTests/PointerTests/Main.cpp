// File: main.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int iVar;
	int * iPtr;

	//* indirection operator
	//& the address-of operator
	//-> "arrow" de-reference operator

	//Change value using pointer
	iVar = 5;
	iPtr = &iVar;
	cout << iPtr << "\n";
	cout << iVar << "\n";
	*iPtr = 6;
	cout << iPtr << "\n";
	cout << iVar << "\n";
	cout << "\n";

	int table[10];
	iPtr = table;
	iPtr = &table[0];

	*iPtr = 1;
	iPtr++;
	*iPtr = 2;
	iPtr++;
	*iPtr = 3;
	cout << table[0] << "|" << table[1] << "|" << table[2];

	cout << "\n";

	//Array name is a constant pointer to the start of an array
	//Use this to get the second element by adding 1
	iPtr = table + 1;
	cout << *iPtr;


	char * message = "Error 1: File creation error";
	char * messages[] = { "Error 1", "Error 2", "Error 3" };
	//Messages is address of first element of array
	cout << *messages << "\n";
	cout << *messages + 1 << "\n";
	cout << *messages + 2 << "\n";
	cout << messages[0] << "\n";
	cout << messages[1] << "\n";
	cout << messages[2] << "\n";

	cout << &messages;
	cout << "\n";
	cout << &messages[0];
	cout << "\n";
	cout << &messages[1];
	cout << "\n";
	cout << &messages[2];

	cout << "\n";

	//The type double* means 'pointer to double'
	//Pointer must be same type as what it points to
	double harrys_account = 1234;
	double joint_account = 5678;

	double* account_pointer;

	account_pointer = &harrys_account;
	cout << *account_pointer << "\n";

	account_pointer = &joint_account;
	cout << *account_pointer << "\n";
	
	*account_pointer = 9999;
	cout << *account_pointer << "\n";
	cout << joint_account << "\n";

	*account_pointer = *account_pointer - 100;
	cout << *account_pointer << "\n";
	cout << joint_account << "\n";

	//Dynamic allocation
	int* myIptr;
	myIptr = new int[150];

	if (myIptr == 0)
	{
		cerr << "No memory available!";
		return 1;
	}

	myIptr[0] = 123;
	myIptr[1] = 456;
	myIptr[2] = 789;

	cout << myIptr[0] << "\n" << myIptr[1] << "\n" << myIptr[2] << "\n";
	cout << &myIptr[0] << "\n" << &myIptr[1] << "\n" << &myIptr[2] << "\n";
	
	//Pointer maths
	//myIptr/array name is a pointer to the first entry
	//Adding 2 skips to the second element
	int* p = myIptr;
	cout << *p + 2;
	
	delete myIptr;
	myIptr = 0;


	//These do the same thing
	int table1[10];
	int* const table2 = new int[10];


	//Dynamic memory allocation for char
	char textline[80]; //Store name temporarily
	char* names[5]; //Array of 5 char* (pointers to char)

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter text " << i <<":\n";
		cin >> textline;
		names[i] = new char[strlen(textline) + 1];
		if (names[i] == 0)
		{
			cerr << "\nMemory allocation error\n";
		}
		else
		{
			//strcpy(names[i], textline);
			strcpy_s(names[i], strlen(textline) + 1, textline); //Secure string copy, requires explicit length of string
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i << ": " << names[i] << "\n";
	}
	
}