#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
using namespace std;


//predeclare functions 
void greetings();
int add(int* a, int* b);
int subtract(int* a, int* b);
int multiply(int* a, int* b);
int divide(int* a, int* b);


int main()
{
	//to build main we forst declare the variables, arrays, and pointers we will be using.
   
	// array of operations fro user to type in 
	string operations[4] = { "Add(1)", "Subtract(2)", "Multiply(3)", "Divide(4)" };
	int operation;
	int a = 0;
	int b = 0;

	//call grettings function for user interaction 
	//greetings function will be the main function controlling all of the other four functions
	void greetings();

	//display choices available to user 
	// first iteration will display add
	// second iteration will display subract
	// third iteration will display multiply
	// fourth iteration will display divide
	for (int i = 0; i < 4; i++){
		cout << operations[i] << endl;
	}

	//make the user choose the math operation they want to perform
	cout << "Please choose the operation you would like to perform by typing the number between 1 to 4: ";

	//collect user type input
	cin >> operation;

	// ask the user for input of two integers seperated by a space
	// these values will be passed to the four functions
	int userNum1{};
	int userNum2{};
	cout << "Please enter a integer seperated by a space: ";
	cin >> userNum1;
    a = userNum1;
	// ask the user 
	cout << "Please enter another integer seperated by a space: ";
	cin >> userNum2;
	b = userNum2;

	//pointer variables to have them reference a and b 
	int* a_ptr = &a;
	int* b_ptr = &b;


	//control flow statement to call the correct function based on user input (Strictly one function will be called based on user input)
	// if user types 1 call add function
	// if user types 2 call subtract function
	// if user types 3 call multiply function
	// if user types 4 call divide function

	//if statements for which number the user types in
	
	if (operation == 1) {
		add(a_ptr, b_ptr); // if user types in 1, the add function gets called.
	}
	else if (operation == 2) {
		subtract(a_ptr, b_ptr); // if the user types in 2, the subtract function gets called. 
	}
	else if (operation == 3) {
		multiply(a_ptr, b_ptr); // if the user types in 3, the multiply function gets called. 
	}
	else if (operation == 4) {
		divide(a_ptr, b_ptr); // if the user types in 4, the divide function gets called. 
	}
	// if user types any other number than zero or greater than 4, 
	else {
		cout << "Invalid number. Please choose a number between 1 and 4." << endl;
	}

	return 0;


}


// functions declared here (return type, name, parameters)

// function to greet the user and explain the program
void greetings() {
	// explain rules to the user 
	cout << "Welcome to the Math Game.\n"
		<< "In this game you are going to choose an operation.\n"
		<< "Then you will choose numbers to pass to the\n"
		<< "operation you wanted to execute.\n"
		<< "Let's start by showing you what operations you can choose from.\n";
}

// function one: add two integers and return the result
int add(int* a, int* b) {
	// Perform the addition
	int result = *a + *b; 
	cout << "\nThe result of adding " << *a << " and " << *b << " is: " << result << endl;
	return result;
}

// function two: subtract two integers and return the result
int subtract(int* a, int* b) {
	// Perform the subtraction
	int result = *a - *b;
	cout << "\nThe result of subtracting " << *a << " and " << *b << " is: " << result << endl;
	return result;
}

// function three: multiply two integers and return the result
int multiply(int* a, int* b) {
	// Perform the multiplication
	int result = *a * *b;
	cout << "\nThe result of multiplying " << *a << " and " << *b << " is: " << result << endl;
	return result;
}

// function four: divide two integers and return the result
int divide(int* a, int* b) {
	// Check for division by zero (In math logic, 
	if (*b == 0) {
		cout << "\nError: Cannot divide by zero." << endl;
		return 0; // Return 0 or handle as needed
	}
	// Perform the division
	int result = *a / *b;
	cout << "\nThe result of dividing " << *a << " and " << *b << " is: " << result << endl;
	return result;
}