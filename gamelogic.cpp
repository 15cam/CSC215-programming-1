// the "meat" of the entire game. 
// include header file for function prototypes
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gamelogic.h" // links to gamelogic.h 

using namespace std;


// Function one - display user instructions 
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
    // fixed: check even/odd using modulus 2
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

