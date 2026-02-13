// UAT Classroom Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{


	// Declare variables to store first and last name
	string firstname, lastname, location;

	//collect user data Part 1; Enter name
	cout << "Enter Professor's full name, as a guess.(Proper Nouns must be Capitalized) " << endl;
	cout << "First name: ";
	cin >> firstname;
	cout << "Last name: ";
	cin >> lastname;
	cout << "first name is:" << firstname << " ,last name is:" << lastname << endl;
	
	
	
	// collect user data part 2; enter location at UAT
	cout << "Enter location at UAT. ";
	cin >> location; 

	srand(time(0)); // Seed the random number generator with the current time 
	
	//generate and print 10 random numbers 
	for (int i = 0; i < 10; i++);
    cout << rand() << " ";


	// IF you type in a correct name, it ends.
	// TODO: design and comment issues
	if ((firstname == "Sue" && lastname == "Ashton" && location == "Room 206") ||
		(firstname == "Brian" && lastname == "Becote" && location == "Room 106") ||
		(firstname == "Hue" && lastname == "Henry" && location == "Cybersecurity Room") ||
		(firstname == "Ryan" && lastname == "Murray" && location == "Maker Lab") ||
		(firstname == "Tyler" && lastname == "Widener" && location == "Engineering Lab") ||
		(firstname == "Rae" && lastname == "Crusoe" && location == "Room 107") ||
		(firstname == "Matthew" && lastname == "Marquit" && location == "Room 205") ||
		(firstname == "Ashley" && lastname == "Mckinley" && location == "Room 208") ||
		(firstname == "Jake" && lastname == "Perrine" && location == " Room 252") ||
		(firstname == "Daniel" && lastname == "Pike" && location == "Room 206"))
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "Try Again!" << endl;
	}

	{
		int(beep); 
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
