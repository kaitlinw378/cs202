//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for Dog Class

#ifndef DOG_H
#define DOG_H

#include<iostream>
#include<string>
#include<stdexcept>
#include<sstream>

class Dog {

    private:
        std::string name;
        int age;
        std::string breed;

    public:
        Dog();
        Dog(const std::string &info);
        Dog(const Dog & rhs);

        std::string getName() const;
        void setName(std::string newName);
        
        int getAge() const;
        void setAge(int newAge);

        std::string getBreed() const;
        void setBreed(std::string newBreed);

};

#endif
