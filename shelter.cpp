//this file contains the implementation of the shelter class intializing the shelter name and count of dogs, 
// adding dogs to the shelter, and printing the shelter's details along with the dogs it contains.


#include "Shelter.h"
#include <iostream>
using namespace std;

//this file contains the implementation of the shelter class intializing the shelter name and count of dogs,
Shelter::Shelter(string n) {
    name = n;
    count = 0;
}

// adding dogs to the shelter, and printing the shelter's details along with the dogs it contains.
void Shelter::addDog(Dog& d) {
    if (count < 20) {
        dogs[count] = d;
        count++;
    }
}

// Method to print the shelter's details along with the dogs it contains.
void Shelter::printShelter() {
    cout << "Shelter: " << name << "\nDogs:\n";

	// A for Loop through the dogs in the shelter and print their details
    for (int i = 0; i < count; i++) {
        dogs[i].printDog();
    }
	
    // Print a separator line after listing the shelter and dogs
    cout << "----------------------\n\n";
}


