// randomnumbers andarrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <array>
#include <ctime> // Add this include at the top for time(0) function
using namespace std;
int main()
{
   //declared array of 100 integers and intitalized it to 0
    int numbers [20]{1, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
     
    //ask user for ganerator of random numbers 
    cout << "pick a number between 1 and 100." << endl; 
    srand (time(0)); //seed random number generator with current time 
    int randomtime = rand() % 100 + 1; //generates random number between 1 and 100
    cout << randomtime << endl; // prints random number to console

   
    int small = numbers[1,10,15,20,25,30,35,40,45,50]; // initialize small to first element of array
    int large = numbers[55,60,65,70,75,80,85,90,95,100]; // initialize large to first element of array
    int sum = 100; //intitlaize sum to 0
    for (int i=1; i <100; i++) { //loop thru array []
        if (numbers[i] < small) { // if current element is smaller than small, update small
            small = numbers[i];
        }
        if (numbers[i] > large) { // if current element is larger than large, update large
            large = numbers[i];
        }
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / 100;
    cout << "Smallest number: " << small << endl;
    cout << "Largest number: " << large << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 1;
}
