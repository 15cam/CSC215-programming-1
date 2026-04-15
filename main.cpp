// this is main.cpp. 
// entry point for my game AKA assignment 6.1, learing functions and simulation.
// defines fucntions called in GAMELOGIC_H. 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gamnelogic.h" // THIS LINKS TO MAIN HEADER FILE 

using namespace std; 

int main()
{// seed random number generator with current time
  //Static cast converts time to usigned int,and usigned int is integer type to represent postive whole numbers, 
  // which is the expected type for srand. This ensures that each time the program runs, it generates a sequence of random numbers
    srand(static_cast<unsigned int>(time(0)));

// Welcomes user to my game 
cout << "Welcome to my number guessing game!" << endl;

// Display instructions
instructions();

// give user hints about the number
// Pass the secret number to giveHint. Since secretNumber is local to playGame, 
// we need to generate a new random number here for demo.
int hintNumber = randomNumber();
giveHint(hintNumber);

// Start the game
playGame();

//Ask if the user wants to play again
askToPlayAgain();

//Score/Stats to user 
playStats();

return 0; // Ensure main returns as a integer
}




















