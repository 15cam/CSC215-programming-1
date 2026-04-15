#ifndef GAMELOGIC_H
#define GAMELOGIC_H

// Function prototypes for game logic
// this header file contains the function prototypes for the game logic, which are defined in gamelogic.cpp.
// This allows us to separate the game logic from the main function, making our code more organized and easier to maintain.



// function prototypes

// displays instructions for user 
void instructions();


//generates a random integer between 1 and 10
int randomNumber();


// handles the main game loop, including user input and feedback
void playGame();

//provides hints to the user about the secret number
void giveHint(int secretNumber);

// Tracks and displays player stats and scores... place holder. 
void playStats();

// Asks user if they want to play again, and starts a new game if they do. 

// if not, it will end the game and display a goodbye message.
void askToPlayAgain();

#endif // GAMELOGIC_H

