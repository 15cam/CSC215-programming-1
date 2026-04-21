// this is where all the code for the riddle game is interpreted. 
#include "RiddleGame.h" // header file 
#include <iostream> // for user input and output
#include <cstdlib> // for random riddle generation
#include <ctime> // for time function to seed random generator
#include <array> // for array of riddles
#include <string> // for string variable






// This function will Greet the user and display the instructions of the game 
void greetings()
// again, std is required for string libary
{
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Welcome to the C++ Ultimate Riddle Game!" << std::endl; 
    std::cout << "------------------------------------------" << std::endl;

    // make user enter their name in 
  // declare variables for user input of thier name 
std::string firstName;
std::string lastName;
    std::cout << "\nPlease enter your first name:";
    std::cin >> firstName;
    std::cout << "\nPlease enter your last name: "; 
    std::cin >> lastName;

}

// This function is a constructor for Riddlegame class in header file. 
void loadRiddles(); 


// This function will display the riddle to the user based on the index of the riddle in the array.
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