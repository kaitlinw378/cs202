//author: kaitlin white
//date: 5/6/21
//semester final coding problem 3

#ifndef CATSPEAKBEHAVIOR_H
#define CATSPEAKBEHAVIOR_H

#include "Animal.h"
#include <string>
#include <iostream>

class CatSpeakBehavior : public Animal{

    std::string catSpeak;
    public:
    CatSpeakBehavior();
    void speak() override;

};

#endif