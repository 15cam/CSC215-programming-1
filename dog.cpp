//this file contains the implementation of the Dog class methods declared in dog.h. It includes the constructor, getter methods for name and age, and a method to print the dog's details.

#include "Dog.h" // Include the header file for the Dog class
#include <iostream>
using namespace std;

//this is the implementation of the Dog class methods declared in dog.h. It includes the constructor, getter methods for name and age, and a method to print the dog's details.
Dog::Dog() {
    name = "";
    age = 0;
}
// Parameterized constructor to initialize the dog's name and age
Dog::Dog(string n, int a) {
    name = n;
    age = a;
}
// Getter method to return the dog's name
string Dog::getName() { return name; }
int Dog::getAge() { return age; }
// Method to print the dog's details in a formatted way
void Dog::printDog() {
    cout << "Dog: " << name << " | Age: " << age << "\n";
}
