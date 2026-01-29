// jumanji welcome to the jungle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <string>
using namespace std;
int main()
{
	cout << "Welcome to JUMANJI, the Ultimate Survival Game." << endl;
	string fname, lname;
	int age;
	cout << "Please enter your first name:";
	cin >> fname;
	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Please enter your age:";
	cin >> age;
	cout << "Your first name is:" << fname << " , and your last name is: "
		<< lname << " and your age is: " << age << endl;
	if (age > 18)
	{
		cout << "You are old enough to play JUMANJI!" << endl;
	}
	else
	{
		cout << "You are not old enough to play JUMANJI!" << endl;
	}
	cout << "Your Journey begins now. Once you play YOU MUST CONTINUE PLAYING UNTIL YOU REACH THE GOLDEN CITY. " << endl;
	string number, scenario;
	cin >> number;
	cout << "Enter a number between 1 and 10: ";
	
        if (number == "1" || number == "2" || number == "3" || number == "4" || number == "5" ||
			number == "6" || number == "7" || number == "8" || number == "9" || number == "10"){
			cout << "You have chosen wisely. Now choose your scenario: , 'Lion', or 'Monkey', or 'Monsoon Season' , or 'Travel Guide' , or 'Testse Fly' , or 'Rhinos': ";
			cin >> scenario;
			if (scenario == "Lion")
			{
				cout << "Lion attacks." << endl;
			}
			else if (scenario == "Monkey")
			{
				cout << "Monkeys Steal your food." << endl;
			}
			else if (scenario == "Monsoon Season")
			{
				cout << "Monsoon pours down on you." << endl;

				else if (scenario == "Travel Guide")
				{
				cout << "Travel Guide is Lost in the jungle. HELP HIM." << endl;
				}
				else if (scenario == "Testse Fly")
				{
					cout << "You are bitten by this fly and you are subdued for 1 hour." << endl;
				}
				else if (scenario == "Rhinos")
				{
					cout << "Rhino Stampede approaches. You run for your life." << endl;

				}
				else if (Scenario == "You died")
				{
					cout << "You Died. Game over!" << endl;
				}
			else if (Scenario == "Golden City")
			{
				cout << "You Reached the Golden City. You did it!" << endl;
			}
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
