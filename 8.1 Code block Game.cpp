// include pre processor header files 
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// predeclare our functions
void greetings();
void instructions();
string names(string a);
void association(string b);
void money();


// main 
int main() {
   // greet the player 
	greetings();
	// give player instructions
	instructions();
	// give the player a array of names to pick from 
	cout << "\nThe name chosen is: " << names("Snoopy");
	// tell the player what name they picked and the number associated with the name the player picked
	association(peanutsName);
	// Tell player how much money that name is worth.
	money();
	
	return 0;

}


// function 1
//returnType   name      ()      {}
void greetings() {
	cout << "Hi, welcome to the Peanuts Name Game." << endl;
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
string names(string a) {
          	
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
	return peanutsName; //liftetime is now dead
}

// function4
void association(string b) {
	
	return 0;
}

// function5
void money() {

}
