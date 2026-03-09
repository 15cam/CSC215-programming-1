/*5 functions. Basic undrstanding of code blocks, scopes, and lifetimes.

*/
// Add preprocessing libraries 
#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

// predecalring my functions 
void greetings();
void instructions();
//string peanutsNames();
//int score(string a);
//double reward(int a);

int main(){
	greetings();
	instructions();

}

/*
This function is gonna meet and introduce the game to the user. 
Ask them if they want to play and if they say yes, then move to next function. If no, end this program.

*/
void greetings() {
	cout << "\nWould you like to play the Peanuts Game?" << endl;

};

/* 
display instructions for the game to the user 
*/
void instructions() {
	cout << "\nType in a random Peanuts name from the list above, \n and it will give you a score and will give you a reward, like at a casino." << endl;

};

/* 
Displays names of the Peanuts characters for the user to type in 
*/
//string peanutsNames() {
//    string name; // variable name, lifetime created
//	name = "Snoopy";
//
//
//    return name; // variable name, lifetime dead 
//};

/*
display the score of the user and how many points they get accordign to the name they typed in if they got it correctly
dending on the name they choose, they will get a score 
Score function will call reward function 


*/
//int score(string a) {
//	//int userScore; // variable userscore, lifetime created
//
//	//return userScore; // variable userscore, lifetime dead
//};

/*
Accepts a argument from score function 
based on the score, it will display how much money they got 
returns the $ value to score 
After reward is given, program shall end here. 
Display the reward to user 
*/
//double reward(int a) {
//	//cout << "THis works for testing" << endl;
//	//// must case a to a double
//	//int scoreValue; // lifetime created
//	//double rewardMoney; // variable rewardMoney, lifetime created
//
//	//return rewardMoney; // variable rewardMoney, lifetime dead
//};

