/*5 functions. Basic undrstanding of code blocks, scopes, and lifetimes.

*/
// Add preprocessing libraries 
#include <iostream>
#include <cstdlib>
#include <array>
#include <ctype.h>
#include <string>
using namespace std;

// predecalring my functions 
void greetings();
void instructions();
string peanutsNames(int maxAttempts);
string GetCharacterHint(const string& name);
int score(string a);
double reward(int a);

int main() {
	
	greetings();
	instructions();

	// int var to store user responese
	int userAttempts;


	// ask the user how many attempts they want between 1 and 5.
	cout << "How many attempts would you like? Enter a number between 1 and 10. " << endl;

		// store user responese in the var
	cin >> userAttempts;

	peanutsNames(userAttempts);
}

/*
This function is gonna meet and introduce the game to the user.
Ask them if they want to play and if they say yes, then move to next function. If no, end this program.

*/
void greetings() {
	// variables for this function 
	char response = ' '; // variable yesno, lifetime created
	cout << "\nWould you like to play the Peanuts Game? (Y/N)";
	cin >> response; // variable response, lifetime created

	
	if (response == 'Y' || response == 'y')
	{
		cout << "\nAwesome! Lets go!" << endl;  // if user responds yes, then program keeps going 
	}
	else if (response == 'N' || response == 'n')

	{
		cout << "\nMaybe Next time! " << endl; // if user responds no, then program ends 
		exit(0);
	}
};

/*
display instructions for the game to the user
*/
void instructions() {
	cout << "\nType in a random Peanuts name from the list above, and it will give you a score\n"
		<< "and will give you a reward, like at a casino." << endl;


	// proceed button to move to next function 


};

/*
Displays names of the Peanuts characters for the user to type in
*/
string peanutsNames(int maxAttempts) {
	int max_attempts = max_attempts; // lifetime created
	string hisStr;
	string names[] = { "Charlie Brown", "Snoopy", "Lucy", "Linus", "Sally", "Marcie", "Peppermint Patty" };	
	int num_names = sizeof(names) / sizeof(names[0]);
	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator with the current time
	int random_index = rand() % num_names; // Generate a random index to select a name from the array
	string selected_name = names[random_index]; // The name to be guessed

	// Print all names (if needed)
	for (int i = 0; i < num_names; i++){
		cout << names[i] << endl; // Print each name in the array
	}

	// Player will be given a hint on what description of Character they will need to guess
	cout << "\nWelcome to the Peanuts Guessing Game!" << endl;
	cout << "\nYou will be given a description of a Peanuts character, and you have to guess who it is." << endl;

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
		return hisStr; // variable name, lifetime dead 
	};

	string GetCharacterHint(const string & name) {
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
	};

/*
display the score of the user and how many points they get accordign to the name they typed in if they got it correctly
dending on the name they choose, they will get a score
Score function will call reward function


*/
int score(string a) {
	//int userScore; // variable userscore, lifetime created

	//return userScore; // variable userscore, lifetime dead
	return 0; // variable userScore, lifetime dead
};

/*
Accepts a argument from score function
based on the score, it will display how much money they got
returns the $ value to score
After reward is given, program shall end here.
Display the reward to user
*/
double reward(int a) {
	cout << "THis works for testing" << endl;
	// must case a to a double
	int scoreValue; // lifetime created
	double rewardMoney; // variable rewardMoney, lifetime created

	return 0.0; // variable rewardMoney, lifetime dead
	};

