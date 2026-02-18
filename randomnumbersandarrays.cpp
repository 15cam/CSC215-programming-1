// randomnumbersandarrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
#include <array>
#include <cstdlib> // Add this include at the top for time(1) function
using namespace std;
int main()
 
{
    // srand time 
    srand(time(0)); // generates 20 random numbers betwen 1 and 100 

    //declare an array to store random numbers 
    int arrRandNum[20]{};

    for (int i = 0; i < 20; i++) {
        int randomNumber = rand() % 101; // generates a random number between 1 and 100
        arrRandNum[i] = randomNumber;
        cout << "Random number is: " << arrRandNum[i] << endl; // prints the random number to the console (i is equal to 0)

    }


    // for 20 iterations, search for the smallest number 
    int smallestnum = arrRandNum[0]; // being intialized to first element of array
    for (int i = 0; i < 20; i++) {
        if (arrRandNum[i] < smallestnum) {
            smallestnum = arrRandNum[i]; // if current element is smaller than smallestnum, update it to current element

        }

    }
    cout << " \n Smallest:" << smallestnum << endl; // print smallest number to console

    // for 20 iterations, search for the largest number
    int largestnum = arrRandNum[0]; // being initialized to first element of array
    for (int i = 0; i < 20; i++) {
        if (arrRandNum[i] > largestnum) {
            largestnum = arrRandNum[i]; // if current element is larger than largestnum, update it to current element
        }

    }
    cout << " \n Largest: " << largestnum << endl; // print largest number to console

    // for 20 iterations, calculate the sum of all numbers in the array 
    int sum = 0; // being initialized to 0
    for (int i = 0; i < 20; i++) {
        sum += arrRandNum[i]; // add current element to sum
    }
    cout << " \n Sum of all numbers: " << sum << endl; // print sum to console

    // for 20 itertaions, calculate the average of all numbers int he array
    int average = sum / 20; // calculate average by dividing sum by number of elements (20)
    cout << " \n Average of all numbers: " << average << endl; // print average to console
    return 0;

}

