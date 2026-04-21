// this is my custom header file for my riddle game. 
#ifndef RIDDLEGAME_H
#define RIDDLEGAME_H
// string libary to store user input and riddles.
#include <string>
// it will store the riddle and the user's answer input. 

// class and objects declaration for the game 
class RiddleGame {
//public class to store riddles and user input. 
public:
	RiddleGame();

	// function to run the game 
	void runGame();

// private class (private is restricting access to other class members compared to public,to store specifcally the riddle and user input 
private: 

	int riddles;
	// std is required for string library
	std::string userInput;
	// number of riddles in the game declaration. Will be in a array in RiddleGame.cpp source file.
	int numRiddle;

	std::string riddleArray[10]; //array declaration with type

	// predeclare functions to be used, and all will be commented and defined RiddleGame.cpp source file. 
	void loadRiddles();
	void greetings();
	void playAgain();
	void displayRiddle(int index);
	void playGame();
	int askRiddle(int attempts);
	int checkanswer();
	void score();
};
#endif // RIDDLEGAME_H