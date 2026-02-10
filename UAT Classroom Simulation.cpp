// UAT Classroom Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//collect user data 
	cout << "Enter Professor's full name, as a guess. " << endl;
	cout << "Your first name is:" << fname << " , and your last name is: " // TODO: design and comment issue
		<< lname << " and your age is: " << age << endl;


	// IF you type in a corretc name, it ends. 
	if (age > 18) // TODO: design and comment issues
	{
		cout << "You are old enough to play JUMANJI!" << endl;
	}
	else
	{
		cout << "You are not old enough to play JUMANJI!" << endl;







	
	
	
	
	// A declared array of five integers
	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << numbers[0] << endl;
	// array of professor names 
	cout << "Here is the list of professors you can type in" << endl;
	string names[10] = {"Sue Ashton", "Brian Becote", "Hue Henry", "Ryan Murray", "Tyler Widener","Rae Crusoe", "Matthew Marquit", "Ashley Mckinley", "Jake Perrine", "Daniel Pike"};
	for (int i = 0; i < 10; i++) {
		cout << names[i] << endl;
	}
	

	{
		int Beep (500); 
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
