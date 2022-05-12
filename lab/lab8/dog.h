//Author: Kaitlin White
//Date: 3/18/21
//Lab 8 - aggregation
//.h file for dog class

#ifndef DOG_H
#define DOG_H

#include "flea.h"
#include<iostream>
#include<vector>
#include<string>

class Dog{

    std::string name;
    Flea* flea;
    std::vector<Flea*> fleas;

    public:
    Dog(std::string name);
    void addFlea( Flea * flea);
    void scratch();
    void getFleaNames();

};

#endif