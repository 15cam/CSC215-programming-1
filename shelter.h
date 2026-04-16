//this is the shelter class header file. Its a simple file representing Shelter with a capacity of 20 dogs. 

#ifndef SHELTER_H
#define SHELTER_H

#include <string>
#include "Dog.h"
using namespace std;

class Shelter {

    
// private command restricts access to the other class members, (name and age) is private to the dog class and cannot be accessed directly. 
private:
    string name;
    Dog dogs[20];   // fixed-size array
    int count;      // how many dogs are stored


    
    //public command allows full access to the other class memebers however. 
public:
    Shelter(string n);

    void addDog(Dog& d);
    void printShelter();
};

#endif
