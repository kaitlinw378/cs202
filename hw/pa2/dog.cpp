//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for Dog Class

#include "dog.h"

using namespace std;

Dog::Dog(){
    name = "";
    age = 0;
    breed = "";
}

Dog::Dog(const string &info){
    try{
        stringstream newDog(info); 
        newDog.exceptions(std::ios::failbit);
        newDog >> name >> age >> breed; 
    }
    catch(exception& e){
        stringstream error;
        error << "The data file is not formatted correctly" << endl;
            throw runtime_error(error.str());
    }
}

Dog::Dog(const Dog& rhs) : name(rhs.name), age(rhs.age), breed(rhs.breed){}

string Dog::getName() const{
    return name;
}

void Dog::setName(string newName){
    string name = newName;
}

int Dog::getAge() const{
    return age;
}

void Dog::setAge(int newAge){
    int age = newAge;
}

string Dog::getBreed() const{
    return breed;
}

void Dog::setBreed(string newBreed){
    string breed = newBreed;
}

