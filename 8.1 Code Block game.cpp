// include pre processor header files 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// predeclare our functions
void greetings();
void instructions();
string names(string a);
int association(string b);
void money(int c);


// main 
int main() {
	// greet the player 
	greetings();
	// give player instructions
	instructions();
	// give the player a array of names to pick from 
	cout << "\nThe name chosen is: " << names("Snoopy");
	// tell the player what name they picked and the number associated with the name the player picked
	
	// Tell player how much money that name is worth.
	

	return 0;

}


// function 1
//returnType   name      ()      {}
void greetings() {
	cout << "Hi, welcome to the Peanuts Name Game." << endl; //this is a code block
	cout << "Tell me your name: ";
	string userName;
	getline(cin, userName);
	cout << "\nYour name is: " << userName << endl;

}

// function2
void instructions() {
	cout << "\nType a Peanuts Character name from the list, and you will win this much money from the name you typed in." << endl;
}

// function3
string names(string a) {  // this is a code block

	string peanutsName = a;// local variable lifetime created
	if (peanutsName == "Charlie Brown") {
		cout << "This is the loveable loser we all know and love! " << endl;
	}
	else if (peanutsName == "Linus") {
		cout << "This is Charlie Brown's best friend." << endl;
	}
	else if (peanutsName == "Lucy") {
		cout << "Charlie Brown's enemy who runs a psychoatric help stand." << endl;
	}
	else if (peanutsName == "Sally") {
		cout << "This is Charlie Brown's little sister." << endl;
	}
	else if (peanutsName == "Marcie") {
		cout << "This is Peppermint Patty's best friend." << endl;
	}
	else if (peanutsName == "Snoopy") {
		cout << "This is Charlie Brown's Dog." << endl;
	}
	else {
		cout << "Unknown" << endl;
	}
	association(peanutsName); // pass the local variable to another function, the lifetime of peanutsName is still alive in this function and the association function
	return peanutsName; //liftetime is now dead
}

// function4
int association(string b) {
	string takeName = b; // local variable lifetime created
	int valueMoney = 0;
	if (takeName == "Charlie Brown") {  // this is a code block
		valueMoney = 100;
	}
	else if (takeName == "Linus") {
		valueMoney = 80; 
	}
	else if (takeName == "Lucy") {
		valueMoney = 60;
	}
	else if (takeName == "Sally") {
		valueMoney = 300;
	}
	else if (takeName == "Marcie") {
		valueMoney = 40;
	}
	else {
		valueMoney = 200;
	}
	money(valueMoney); // pass the local variable to another function, the lifetime of takeName is still alive in this function and the money function
	
	return valueMoney; // lifetime of takeName is now dead
}

// function5
void money(int c) {
	cout << "\n$" << c << " Dollars" << endl;  //this is a code block

	return;
}