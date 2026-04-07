#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
using namespace std;


//predeclare functions
int add(int* a, int* b);
int subtract(int* a, int* b);
int multiply(int* a, int* b);
int divide(int* a, int* b);



int main()
{

    //greet user for good user experience
    
    cout << "Welcome user to my Math game!" << endl;
  
    //make user choose the math operation they will want to do
  
    cout << "\nChoose the operation you want to do:" << endl;
   
    // array of operations for user to type in 
    string operations[4] = { "Add(1)", "Subtract(2)", "Multiply(3)", "Divide(4)" }; 

    // Display all operations for user to choose
    for (int i = 0; i < 4; ++i)
    {
        cout << operations[i] << endl;
    }
    //user types in operation they want to do 
    int operation;
    cin >> operation;

    //calling functions to return to 
   
    add(operation);
    subtract(operation);
    multiply(operation);
    divide(operation); 
    
    
    return 0;

}

// declare functions here (return to greetings function if user types in greetings, return to add function if user types in add, etc.)

//function 1
int add(int* a, int* b)
//code block with c++ pointers
{ 
// declare variables for user input
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // perform addition using pointers
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    // display result
	cout << "The sum is: " << sum << endl;

       return 0;
}






//function 2
int subtract(int* a, int* b)
//code block with c++ pointers
{
// declare variables for user input
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // perform subtraction using pointers
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int difference = *ptr1 - *ptr2;
	// display result

     return 0;
}


//function 3 
int multiply(int* a, int* b)
//code block with c++ pointers
{ 
  // declare variables for user input
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // perform multiplication using pointers
    int* ptr1 = &num1;
    int* ptr2 = &num2;
	int product = *ptr1 * *ptr2;

    return 0;
 }



//function 4 
int divide(int* a, int* b)
//code block with c++ pointers 
{
	// declare variables for user input
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // perform division using pointers
    int* ptr1 = &num1;
	int* ptr2 = &num2;
      
       return 0;
}