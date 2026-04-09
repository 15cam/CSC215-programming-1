#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
using namespace std;


//this is a header source code file cpp code, which contains the function definitions for the functions declared in the header file. It also contains any necessary includes and using directives.

//include necessary headers

//predeclare functions
void greetings();
void nameGame(int number);






int main()
{
	// greet user for good UX
	cout << "Welcome to the 1900 famous person generator!" << endl;
	//array of numbers for user to type in
	string numbers[10] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };
	//make user type a number in
	cout << "\nEnter a number between 1 and 10:" << endl;
	int number; 
	cin >> number;




	return 0;
}
//main function to control other functions 
void greetings()
{
// code block with necessary headers 

//display instructions to user 





      
}

// function two (return to main)  
void nameGame(int number)
{
// code block including necessary headers 

// once number is typed in by user, generate the persons name for user based on number given
	string names[10] = { "Albert Einstein" ,"Marie Curie" ,"Winston Churchill" ,"Mahatma Gandhi" ,"Charles Lindbergh" ,"Amelia Earhart" ,"Pablo Picasso" ,"Frida Kahlo" ,"Charlie Chaplin" ,"Martin Luther King Jr." };

	







	return(greetings);
}