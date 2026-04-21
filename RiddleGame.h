// this is my custom header file for my riddle game. 
#ifndef RIDDLEGAME_H
#define RIDDLEGAME_H
// string libary to store user input and riddles.
#include <string>
using namespace std;
// class and objects declaration for the game 
class RiddleGame
{
public:
	// string variable to store user input and riddle
	//std is required to use string library. 
	int riddles;
	string getRiddles[10]; //array to store riddles
	string getAnswers[10]; //array to store answers
	// public class to access the private class members 
public:
	//predeclare functions to the riddle game, all commented and defined over in RiddleGame.cpp file.
	RiddleGame();
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
