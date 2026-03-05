// Peanuts guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

// Helper function to return a hint for each character
static string GetCharacterHint(const string& name)
{
    if (name == "Charlie Brown")
        return "He is the lovable loser and main character, always wearing a zigzag shirt.";
    else if (name == "Snoopy")
        return "He is a beagle with a vivid imagination, often seen atop his doghouse.";
    else if (name == "Lucy")
        return "She is known for her bossy attitude and runs a psychiatric help booth.";
    else if (name == "Linus")
        return "He is Charlie Brown's best friend and never parts with his blue blanket.";
    else if (name == "Sally")
        return "She is Charlie Brown's younger sister, often calling him 'big brother'.";
    else if (name == "Peppermint Patty")
        return "She is athletic, calls Charlie Brown 'Chuck', and struggles in school.";
    else if (name == "Marcie")
        return "She is Peppermint Patty's best friend and calls her 'Sir'.";
    else
        return "No hint available.";
}

// TODO: Implement the game logic here


//function to play the game with default number of attempts set to 4 


static void PlaynameguesssingGame(int max_attempts = 4)
{
	string names[] = { "Charlie Brown", "Snoopy", "Lucy", "Linus", "Sally" , "Peppermint Patty" , "Marcie"};
	int num_names = sizeof(names) / sizeof(names[0]);
	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator with the current time
	int random_index = rand() % num_names; // Generate a random index to select a name from the array
	string selected_name = names[random_index]; // The name to be guessed

	// Print all names (if needed)
	for (int i = 0; i < num_names; i++)
	{
		cout << names[i] << endl; // Print each name in the array
	}

	//Player will be given a hint on what description of Character they will need to guess
	cout << "Welcome to the Peanuts Guessing Game!" << endl;
	cout << "You will be given a description of a Peanuts character, and you have to guess who it is." << endl;
	int attempts = 0;
	while (attempts < max_attempts)
	{
		cout << "Hint: " << GetCharacterHint(selected_name) << endl; // Get a hint based on the selected name
		cout << "Enter your guess: ";
		string guess;
		getline(cin, guess); // Read the user's guess
		if (guess == selected_name)
		{
			cout << "Congratulations! You guessed correctly!" << endl;
			return; // Exit the function if the guess is correct
		}
		else
		{
			cout << "Wrong guess. Try again!" << endl;
			attempts++;
		}
	}
	  
}

int main()
{

	void PlaynameguesssingGame(); // Call the function to start the game

	void PlaynameguesssingGame(int max_attempts); // Call the function with a specific number of attempts

	void PlaynameguesssingGame(int max_attempts = 4); // Call the function with the default number of attempts
	

    return 0;
}




