//author: kaitlin white
//date: 5/6/21
//semester final coding problem 3

#ifndef DOGSPEAKBEHAVIOR_H
#define DOGSPEAKBEHAVIOR_H

#include "Animal.h"
#include<string>
#include<iostream>

class DogSpeakBehavior : public Animal{

    std::string dogSpeak;
    public:
    DogSpeakBehavior();
    void speak() override;

};


#endif