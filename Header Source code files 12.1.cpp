// create a header file of your own and include it in this source file. 
// The header file should contain a function declaration, and the source file should contain the function definition. Then, call the function from the main function.


// Header file: mathgame.h
#ifndef MATHGAME_H
//define it to prevent multiple inclusions of the same header file
#define MATHGAME_H



// Function declarations (no logic here, just the signatures)

// Function to display instructions to the player
void instructions();
// Function to generate a random number between 1 and 10
int randomNumber();

// Function to get the player's guess
void playGame(); // MAIN FUNCTION TO PLAY THE GAME

// Function to give a hint to the player
void giveHint(int secretNumber);
// Function to display the player's statistics
void playStats();
// Function to ask the player if they want to play again
void asktoPlayAgain();

// End of header file

#endif // MATHGAME_H  


