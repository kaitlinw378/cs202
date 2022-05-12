//author: kaitlin white
//date: 5/6/21
//semester final coding problem 3

#include "CatSpeakBehavior.h"

CatSpeakBehavior::CatSpeakBehavior(){
    catSpeak = "meow";
}

void CatSpeakBehavior::speak(){
    std::cout << catSpeak << std::endl;
}
