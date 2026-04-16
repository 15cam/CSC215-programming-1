// This header file defines a simple class representing a dog, with attributes for the dog's name and age, and a method to make the dog bark.


#ifndef DOG_H  // my own header file guard to prevent multiple inclusions
#define DOG_H  // Include necessary libraries
#include <string>


class Dogs
{
public:

	std::string name; // Attribute to store the dog's name
	int age; // Attribute to store the dog's age

	Dogs(std::string n, int a) : name(name), age(age) {} // Constructor to initialize the dog's name and age

};
#endif // DOG_H
