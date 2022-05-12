//author: kaitlin white
//date: 4/1/21
//lab 10

#ifndef TERRIER_H
#define TERRIER_H 

#include "dog.h"
#include "trainable.h"

#include<iostream>
#include<string>

class Terrier : public Dog, public Trainable{

    public: 
    Terrier(const std::string &name);
    void eat(int amount) override;
    void speak(std::string text) override;
    void speak(std::string text, int volume) override;
    friend std::ostream& operator << (std::ostream& out, const Terrier& terrier);

};

#endif