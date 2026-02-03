// Jumanjiloops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;// design

int main()
{ // TODO: missing something that will break your entire code
	cout << "Welcome to JUMANJI, the Ultimate Survival Game." << endl;
	string fname, lname; // nice!
	int age;

	// COLLECT USER DATA
	cout << "Please enter your first name:";
	cin >> fname;
	cout << "Please enter your last name: "; // TODO: how can you make collecting fname and lname more powerful and use only one line?
	cin >> lname;
	cout << "Please enter your age:";
	cin >> age;
	cout << "Your first name is:" << fname << " , and your last name is: " // TODO: design and comment issue
		<< lname << " and your age is: " << age << endl;


	// IF YOU ARE NOT OBER THE AGE IF 18 YOUR CANT PLAY THE GAME 
	if (age > 18) // TODO: design and comment issues
	{
		cout << "You are old enough to play JUMANJI!" << endl;
	}
	else
	{
		cout << "You are not old enough to play JUMANJI!" << endl;
	}
	cout << "Your Journey begins now. Once you play YOU MUST CONTINUE PLAYING UNTIL YOU REACH THE GOLDEN CITY. " << endl;



	//  ROLL A DIE AAND GET A NUMBER
	cout << "Enter a number between 1 and 10: ";
	string scenario;
	int number;
	cin >> number;
	if (number == 1 || number == 2 || number == 3 || number == 4 || number == 5 ||   // TODO: what data type is best when using whole numbers?
		number == 6 || number == 7 || number == 8 || number == 9 || number == 10) {



		// CHOOSE A RANDOM SCENARIO FROM THE LIST. ONCE YOU CHOOSE ONE, YOU CAN'T CHOOSE IT AGAIN. 	
		cout << "You have chosen wisely. Now choose your scenario: , 'Lion', or 'Monkey', or 'Monsoon' , or 'Travel' , or 'Fly' , or 'Rhinos': "; // design	
		cin >> scenario;
		if (scenario == "Lion")
		{
			cout << "Lion attacks." << endl;
		}
		else if (scenario == "Monkey")
		{
			cout << "Monkeys Steal your food." << endl;
		}
		else if (scenario == "Monsoon")
		{
			cout << "Monsoon pours down on you." << endl;
		}
		else if (scenario == "Travel")
		{
			cout << "Travel Guide is Lost in the jungle. HELP HIM." << endl;
		}
		else if (scenario == "Fly")
		{
			cout << "You are bitten by this fly and you are subdued for 1 hour." << endl;
		}
		else if (scenario == "Rhinos")
		{
			cout << "Rhino Stampede approaches. You run for your life." << endl;
		}
		else if (scenario == "You died")
		{
			cout << "You Died. Game over!" << endl;
		}
		else
		{
			cout << "You Reached the Golden City. You did it!" << endl;
		}
	}
}

// do while loop if you want to play the game again or exit out of the game 

// ASK THE USER IF YOU WANT TO PLAY AGAIN 
{ 
	char playagain; 
         
	cout << "Try Again?" << endl; 

	cout << "Thanks for Playing. Goodbye!" << endl;

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
