// Arrays practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	// A declared array of five integers
	int numbers [5] = {2,4,6,8,10};
	cout << numbers[0] << endl;
	string names[5] = { "Peter", "Tony", "Bruce", "Natasha", "Clint" };
	cout << names[0] << endl;
	//cout <, names[5] <, endl; // Will not work
	cout << "Array Numbers Elements: ";
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Array Names Elements: ";
	for (int i = 0; i < 5; i++) {
		cout << names[i] << " ";
	}


	int marks[3]; // Declared array on 3 integers
	// marks [3] = { , , }
	cout << "Please enter 3 marks: ";
	for (int i = 0; i < 5; i++) {
		cout << marks[i] << " ";
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
