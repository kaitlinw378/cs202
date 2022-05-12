//author: kaitlin white
//date: 4/1/21
//lab 10

#ifndef TRAINABLE_H
#define TRAINABLE_H

#include<string>

class Trainable{

    public: 
    virtual void speak(std::string text) = 0;
    virtual void speak(std::string text, int vol) = 0;

};

#endif