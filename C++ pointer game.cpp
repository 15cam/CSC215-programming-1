#include <iostream>
#include <cstdlib>
#include <array>
#include <string>
using namespace std;


//predeclare functions
int add(int operation);
int subtract(int operation);
int multiply(int operation);
int divide(int operation);



int main()
{
    
    //greet user for good user experience
    
    cout << "Welcome user to my Math game!" << endl;
  
    //make user choose the math operation they will want to do
  
    cout << "\nChoose the operation you want to do:" << endl;
   
    // array of operations for user to type in 
    string operations[4] = { "Add", "Subtract", "Multiply", "Divide" }; 

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

// declare functions here

//function 1
int add(int operation)
//code block with c++ pointers
{ 
// if user types in add, go to this function (in other words, only this function gets called) 
if (operation == )



    return 0;
}






//function 2
int subtract(int operation)
//code block with c++ pointers
{ 
//if user types in subtract, go to this function (in other words, only this function gets called) 
if (operation =)



   

    return 0;
}



//function 3 
int multiply(int operation)
//code block with c++ pointers
{ 
//if user types in multiply, go to this function (in other words, only this function gets called) 
if (operation =)



    return 0;
}



//function 4 
int divide(int operation)
//code block with c++ pointers 
{
//if user types in divide, go to this function (in other words, only this function gets called) 
if (operation =)




    return 0;
}