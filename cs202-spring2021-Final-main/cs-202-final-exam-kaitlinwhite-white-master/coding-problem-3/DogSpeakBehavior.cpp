//author: kaitlin white
//date: 5/6/21
//semester final coding problem 3

#include "DogSpeakBehavior.h"

DogSpeakBehavior::DogSpeakBehavior(){
    dogSpeak = "woof";
}

void DogSpeakBehavior::speak(){
    std::cout << dogSpeak << std::endl;
}