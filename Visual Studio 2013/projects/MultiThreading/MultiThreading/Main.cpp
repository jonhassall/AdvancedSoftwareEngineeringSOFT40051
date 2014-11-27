// File: Main.cpp
// Version: V1.0
// Date: 26-11-14
// Name: Jonathan Hassall

#include <stdio.h>
#include <stdlib.h>
#include <exception>
#include <iostream>
#include <thread>
#include <time.h>
#include <Windows.h>
#include <process.h>

//Multithreading
//Use criticalsection calls to surround areas that may lead to race conditions
//Similar to using the 'synchronize' keyword in Java

using namespace std;

#define NUM_THREADS     25

CRITICAL_SECTION critical;

double caffeineLevel = 0;
double caffeineWarningLevel = 90;

void drinkCoffee(double cupsToDrink, long millisecondsToPause)
{
	boolean end = false;

	while (!end)
	{
		cout << "This thread (" << GetCurrentThreadId() << ") is pausing for " << millisecondsToPause << " milliseconds\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(millisecondsToPause));

		EnterCriticalSection(&critical);
		cout << "Current caffeine level: " << caffeineLevel << " Warning level: " << caffeineWarningLevel << "\n";
		if (caffeineLevel >= caffeineWarningLevel)
		{
			cout << "Warning! Caffeine warning! I'm not drinking that, I'll explode! Thread " << GetCurrentThreadId() << "\n";
			end = true;
		}
		else
		{
			cout << "Drinking " << cupsToDrink << " cup of coffee. Thread " << GetCurrentThreadId() << "\n";
			caffeineLevel = caffeineLevel + cupsToDrink;
		}

		LeaveCriticalSection(&critical);
	}
}

int main(int argc, char *argv[])
{
	InitializeCriticalSection(&critical);

	thread** threads;
	threads = new thread*[NUM_THREADS];

	for (int i = 0; i < NUM_THREADS; i++)
	{
		//Constructs the new thread and runs it. Does not block execution
		threads[i] = new thread(drinkCoffee, 1, 250);
	}

	for (int i = 0; i < NUM_THREADS; i++)
	{
		threads[i]->join();
	}

	for (int i = 0; i < NUM_THREADS; i++)
	{
		delete(threads[i]);
	}

	delete[] threads;

	DeleteCriticalSection(&critical);

	/*thread thread1(drinkCoffee, 1, 250);
	thread thread2(drinkCoffee, 1, 500);
	thread thread3(drinkCoffee, 1, 750);
	thread thread4(drinkCoffee, 1, 250);
	thread thread5(drinkCoffee, 1, 500);
	thread thread6(drinkCoffee, 1, 750);
	thread thread7(drinkCoffee, 1, 250);
	thread thread8(drinkCoffee, 1, 500);
	thread thread9(drinkCoffee, 1, 750);
	thread thread10(drinkCoffee, 1, 250);*/

	//Makes the main thread wait for the new thread to finish execution, therefore blocks its own execution

	//for (int i = 0; i < NUM_THREADS; i++)
	//{
		//threadArray[i]->join();
	//}

	//threadPtr->join();

	/*thread1.join();
	thread2.join();
	thread3.join();
	thread4.join();
	thread5.join();
	thread6.join();
	thread7.join();
	thread8.join();
	thread9.join();
	thread10.join();*/

	
}