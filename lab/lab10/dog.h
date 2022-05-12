//author: kaitlin white
//date: 4/1/21
//lab 10

#ifndef DOG_H
#define DOG_H

#include<string>

class Dog{

    protected:
        std::string name; 
        int amountEaten = 0;

    public:
    Dog();
    Dog(const std::string& name); 
    virtual void eat(int amountInPounds) = 0;

};

#endif