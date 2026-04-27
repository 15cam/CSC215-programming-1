//=========== HEADER FILES ==========
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


//=========== FUNCTION PROTOTYPES ==========
string greetings(string name);
void instructions();
void riddleQuestions();
void riddleAnswers();
//=========== MAIN ==========
int main() {


    srand(time(0));
    // collect user's name 
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);

    //Call our functions (other two functions are in a do while loop) 
    greetings(userName);
    instructions();


    //if they want to play again, run the main game loop again  (do while)

    //if no, end the program (do while)
    string yesNo; 
    
    // ============ DO WHILE LOOP HERE =============

    do {

        riddleQuestions();
        riddleAnswers();

        cout << "Do you want to do it again? (Y or N): ";
        cin >> yesNo;
        cin.ignore(); // prevents next input from being skipped.

	} while (yesNo == "Y" || yesNo == "y");

	cout << "\n\nThanks for playing! Goodbye\n" << endl;

	//do while loop here
    
}

//=========== FUNCTIONS DEFINITIONS ==========
//greet the user 
string greetings(string name) {

    cout << "\n\nWelcome to the Hardest Riddle Game EVER!\n"
        << "Be prepared to solve the hardest riddles on the planet!\n"
        << "LET'S GO, " << name << endl;
    return "\n";
}

//display the instructions 
void instructions() {
    cout << "\n\nYou will be given a riddle.\n"
        << "And you must think throughly and type your guess below.\n"
        << "If you guess correctly, you get 50 points. If you are wrong, always try again!\n"
        << "You will have 1 attempt to guess correctly.\n\n" << endl;
}

 //give user a riddle (generate randomly everytime its ran)
    void riddleQuestions() {
        // create array of 10 elements 
        string riddles[10]{};
        // add the 10 riddles into the array
        riddles[0] = "I speak without a mouth and hear without ears. I have no body, but I come alive with wind.";
        riddles[1] = "What is seen in the middle of March and April that cant be seen at the beginning or end of either month?";
        riddles[2] = "What disappears as soon as you say its name?";
        riddles[3] = "What gets wet while drying?";
        riddles[4] = "First, think of the color of the clouds. Next, think of the color of snow. Now, think of the color of a bright full moon. Now answer quickly: What do cows drink?";
        riddles[5] = "What comes once in a minute, twice in a moment, but never in a thousand years?";
        riddles[6] = "What word found in a dictionary is always spelled incorrectly?";
        riddles[7] = "What is able to go up a chimney when down but unable to go down a chimney when up?";
        riddles[8] = "You see a boat filled with people. It has not sunk, but when you look again you dont see a single person on the boat. Why is that?";
        riddles[9] = "What English word has three consecutive double letters?";
        // seed a random number generator to select a new riddle at random

        // create variable to store the number of the array choice
        int randomNum = 0;
        randomNum = rand() % 10;
        // display the riddle for the user
        cout << riddles[randomNum];

    }
    //Let user think and type an answer in to solve the riddle
    void riddleAnswers() {
        cout << "\n\nTake your time to think through.\n"
            << "When your ready, type in your answer here. ";

        string answers = " ";
        getline(cin, answers);

        cout << "You answered: " << answers << endl;

        // If they get it right, they get a point, if they get it wrong, they get no points at all
        string riddles[10]{};
        // add the 10 answers for riddles to array 
        riddles[0] = "An Echo.";
        riddles[1] = "The Letter R";
        riddles[2] = "Silence";
        riddles[3] = "A Towel";
        riddles[4] = "Water";
        riddles[5] = "The Letter M";
        riddles[6] = "Incorrectly";
        riddles[7] = "An Umbrella";
        riddles[8] = "All the people on it got married";
        riddles[9] = "Bookkeeper";

        // Variable to hold the points
        int points = 0;
        //if answer is correct, give them points.
        if (answers == riddles[0] ||
            answers == riddles[1] ||
            answers == riddles[2] ||
            answers == riddles[3] ||
            answers == riddles[4] ||
            answers == riddles[5] ||
            answers == riddles[6] ||
            answers == riddles[7] ||
            answers == riddles[8] ||
            answers == riddles[9]) {
            points++;
            cout << "\n\nCorrect.  Your score is: " << points << "\n" << endl;
        }
        //if answer is wrong, no points given
        else {
            cout << "\n\nSorry, that is the wrong answer.\n"
                << "No points scored.\n"
                << "Muuuwahahahahahahahahaha!!!\n" << endl;
        }
      
    }
   
    //----------------- PROGRAM CODE BLOCK ENDS HERE ------------------------
