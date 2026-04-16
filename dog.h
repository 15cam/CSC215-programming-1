// This header file defines a simple class representing a dog, with attributes for the dog's name and age, and a method to print the information out.

#ifndef DOG_H// Include guard to prevent multiple inclusions of this header file
#define DOG_H// Define the Dog class

#include <string>
using namespace std;

class Dog {

// private command restricts access to the other class members, (name and age) is private to the dog class and cannot be accessed directly. 

private:
	string name;// Attribute to store the dog's name
	int age;// Attribute to store the dog's age

//public command allows full access to the other class memebers however. 

public:
	Dog();// Default constructor
    Dog(string n, int a);



	string getName();// Method to get the dog's name
	int getAge();// Method to get the dog's age

	void printDog();// Method to print the dog's details
};

#endif
