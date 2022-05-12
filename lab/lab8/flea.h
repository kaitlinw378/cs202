//Author: Kaitlin White
//Date: 3/18/21
//Lab 8 - aggregation
//.h file for flea class

#ifndef FLEA_H
#define FLEA_H

#include<string>
#include<iostream>

class Flea{

    std::string name;
    std::string hobby;
    float age;
    bool alive;
 
    public:
    Flea(std::string name, std::string hobby, float age);
    void die();



};

#endif