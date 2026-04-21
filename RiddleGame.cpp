// this is where all the code for the riddle game is interpreted. 
#include "RiddleGame.h" // header file 
#include <iostream> // for user input and output
#include <cstdlib> // for random riddle generation
#include <ctime> // for time function to seed random generator
#include <array> // for array of riddles
#include <string> // for string variable
using namespace std; 

//predecalre the functions to be used in the game.
void greetings();
void loadRiddles();
void displayRiddle(int index);
int askRiddle(int attempts);
void playGame();
int checkanswer();
void playAgain();
void score();



// Implement the RiddleGame constructor using the class definition from the header
   

// This function will Greet the user and display the instructions of the game 
void greetings()
// again, std is required for string libary
{
    cout << "------------------------------------------" << endl;
    cout << "Welcome to the C++ Ultimate Riddle Game!" << endl;
    cout << "------------------------------------------" << endl;

    // make user enter their name in 
  // declare variables for user input of thier name 
    string firstName;
    string lastName;
    cout << "\nPlease enter your first name:";
    cin >> firstName;
    cout << "\nPlease enter your last name: ";
    cin >> lastName;

    cout << "------------------------------------------" << endl;
    cout << "Welcome to the C++ Ultimate Riddle Game!" << endl;
    cout << "------------------------------------------" << endl;

}

// This function is a constructor for Riddlegame class in header file. 
void loadRiddles()
{
	// constructor to load the riddles and answers into the game.
        
    
    
    
    
    // string array to store the riddles 
    string getRiddles[10] = { "I speak without a mouth and hear without ears. I have no body, but I come alive with wind. " , 
        "What is brown and has a tail, a head, and no legs" , 
		
        "You don’t know me yet, but you always miss me when I’m gone. " , 
        
        "I can fly but have no wings. I cry but have no eyes." , 
        
        "What color is the wind?" , 
        
        " What is the one thing everyone can agree is between heaven and earth?" , 
       
        "When is “L” greater than “XL”?" , 
       
        "My thunder comes before the lightning. My lightning comes before the clouds. My rain dries all the land it touches. " , 
        
        "What 5-letter word, if typed in all capital letters, can be read the same upside down?"};
    // string array to store answers
    string getAnswers[10] = { "An Echo", "A Penny" , "Time" , "Clouds" , "BLEW" , "A shadow" , "the word AND" , "Roman Numerals" , "A volcano" , "SWIMS"};
}


// This function will display the riddle to the user based on the index of the riddle in the array above .
void displayRiddle(int index);


// This function will ask the user a riddle and return the number of attempts it took for the user to answer correctly.
int askRiddle(int attempts);

// This function will run the main game loop, where the user will be asked riddles and their answers will be checked.
void playGame();

// This function will check the user's answer against the correct answer and return 1 if correct, 0 if incorrect.
int checkanswer();

// This function will ask the user if they want to play again after the game is over.
void playAgain();

// This function will calculate and display the user's score if they don't want to play again.
void score();