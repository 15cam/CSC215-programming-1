//this is the main.cpp file for my classes and objects assignment

//Classes and Objects asiignment

//classes are considered the blueprints for objects. In this code, the class is defined as dogs and shelters.

//Objects are individual instances of a certain class. in this code, the objects are the different types of dogs created 

// For shelters, the objects are the different shelters created.

#include <iostream>
#include "dog.h" // Include my custom header file for the Dog class
#include "shelter.h" // Include my custom header file for the Shelter class
using namespace std;

// This is the main function of my program called Doggy Managing Group.

int main() {
    //greet user and explain program 
	
    cout << "Welcome to Dog Manager!\n\n";
	cout << "We track dogs and put them in care shelters.\n\n";

	//array/list of dogs and shelters created to store the different types of dogs and shelters.THIS IS OBJECTS IN DOGS CLASS. 
    // d1-d10 stands for different dogs with name and age. 
    // dog is defined in Dog.h and in Dog.cpp

    Dog d1("Duke", 3);
    Dog d2("Ella", 2);
    Dog d3("Charles", 4);
    Dog d4("Pearl", 1);
    Dog d5("Max", 5);
    Dog d6("Daisy", 2);
    Dog d7("Sable", 6);
    Dog d8("Gidget", 3);
	Dog d9("Cheddar", 4);
	Dog d10("Rocky", 2);

	//array/list of shelters created to store the two shelters and the ten dogs they contain. THIS IS OBJECTS IN SHELTERS CLASS.
    // shelter is defined in shelter.h and shelter.cpp
    
    Shelter s1("Paws to the Rescue\n");
    Shelter s2("Helping Hands for Dogs\n");

	// Adding dogs to the shelters using the addDog variable, which takes a Dog object as an argument and adds it to the shelter's array of dogs (limited to 5).
    // s1 (Shelter 1) and s2 (Shelter 2) stands for the two shelters for each dog 
    s1.addDog(d1);
    s1.addDog(d2);
    s1.addDog(d3);
    s1.addDog(d4);
	s1.addDog(d5);
	s2.addDog(d6);
    s2.addDog(d7);
    s2.addDog(d8);
	s2.addDog(d9);
	s2.addDog(d10);


    // printshelter is in shelter.cpp and it prints both shelter's details with five dogs in each one. 
    s1.printShelter();
    s2.printShelter();

    return 0;
}	//program ends and returns 0 to indicate successful execution. 	







