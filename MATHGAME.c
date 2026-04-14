#include <iostream>
#include <string> // for function including string 
#include <cstdlib> 
#include <ctime> // for my game 
#include "MATHGAME_H" // my custom header file 
using namespace std;

// Function to display instructions
void instructions()
{
    cout << " You must choose a number between 1 and 10.\n ";
}

// Function to generate a random number between 1 and 10
int randomNumber()
{
    return rand() % 10 + 1;
}

// Function for user gameplay 

// main game loop 
void playGame()
{
    int secretNumber = randomNumber(); // Call the randomNumber function to get the secret number
    int guess;
    int attempts = 3;

    cout << " You have " << attempts << " attempts to guess the number.\n ";

    for (int i = 0; i < attempts; i++) // for loop for the 3 attempts
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber)
        {
            cout << " Congratulations! You guessed the number!\n ";
            return; // return string function to end game if user wins
        }
        else if (guess < secretNumber)
        {
            cout << " Too low! Try again.\n ";
        }
        else if (guess > secretNumber)
        {
            cout << " Too high! Try again.\n ";
        }
    }

    cout << " Sorry, you've used all your attempts. The number was " << secretNumber << ".\n ";
}

// function to give user hints about the number
void giveHint(int secretNumber)
{
    if (secretNumber % 10 == 0)
    {
        cout << "Hint: The number is even.\n ";
    }
    else
    {
        cout << "Hint: The number is odd.\n ";
    }
}


// this function is to show player stats and scores 
void playStats()
{


}

// function to ask user if they want to play again (When Played again, same hint for first game will be shown)
void askToPlayAgain()
{
    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y')
    {
        playGame(); // Call the playGame function to start a new game
    }
    else
    {
        cout << " Thanks for playing! Goodbye!\n ";
    }
}

int main()
{




    // seed random number generator with current time
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
