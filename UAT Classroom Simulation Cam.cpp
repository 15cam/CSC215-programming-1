// UAT Classroom Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main()
{
	cout << "Welcome to UAT!" << endl;
	
	// A declared array of five integers
	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// declare a array of 10 Professor names 
	string names[10] = {
		"Sue Ashton ",  //0
		"Brian Becote ", //1
		"Hue Henry", //2
		"Ryan Murray", //3
		"Tyler Widener ", //4
		"Rae Crusoe ", //5
		"Matthew Marquit ", //6
		"Ashley Mckinley ", //7
		"Jake Perrine ", //8
		"Daniel Pike" }; //9

	// ask the user for random number
	cout << "Pick a number between 0 and 10." << endl;
	//create a random number generator to slect a random professor name from array
	srand(time(0)); // seed the random number generator with the current time
	int randomtime = rand() % 10; // generates 0-9
	cout << "You picked number: " << randomtime << endl;

	//Random number will generate a random name 
	// Access the names[10] using the student generated number, randomtime
	cout << "Splendid! Number " << randomtime << " is Professor: " << endl;
	cout << names[randomtime] << endl;


	// beep sound to end the tour 
	cout << "Thank you for participating!" << endl;
	void schoolBell(); {
		// Frequencies (Hz) and durations (ms) to mimic a bell ring
		int bellPattern[][2] = {
			{1000, 200}, // High tone
			{800,  200}, // Lower tone
			{1000, 200}, // High tone
			{800,  400}  // Lower tone, longer
		};

		// Repeat the pattern to simulate ringing
		for (int repeat = 0; repeat < 3; ++repeat) {
			for (auto& note : bellPattern) {
				Beep(note[0], note[1]);
			}
			Sleep(200); // Short pause between rings
		}
	}

} 

// references
// w3schools rands/arrays
// school bell sound. retrieved from https://www.bing.com/search?q=c%2B%2B%20create%20a%20school%20bell%20sound&qs=n&form=QBRE&sp=-1&ghc=1&lq=0&pq=c%2B%2B%20create%20a%20school%20bell%20sound&sc=10-30&sk=&cvid=B1186716C9F140118D4903222EBF0475 
// 


