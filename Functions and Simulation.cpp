// Functions and Simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> // for function including string 
#include <cstdlib> 
#include <ctime> // for my game 
using namespace std;

// this function is to display instructions
void instructions()
{

    cout << " You must choose a number between 1 and 50.\n ";
}

// this function will generate a "secret" random number for user to guess
int randomNumber()
{
    // Generate a random number between 1 and 50
    return rand() % 50 + 1;
}

// main game loop function
void PlayGame()
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

int main()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Welcomes user to my game 
    cout << "Welcome to my number guessing game!" << endl;

    // Display instructions
    instructions();

    // Start the game
    PlayGame();

    return 0; // Ensure main returns as a integer
}

//references 
// w3Schools C++ Functions http://www.w3schools.com/cpp/cpp_functions.asp
//programiz C+= Functions https://www.programiz.com/cpp-programming/function
// tutorials point C++ functions https://www.tutorialspoint.com/cplusplus/cpp_functions.htm
// Copilot (but in a good way) https://copilot.github.com/