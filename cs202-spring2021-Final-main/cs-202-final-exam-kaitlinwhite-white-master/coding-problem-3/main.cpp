#include <iostream>
#include "Animal.h"
#include "CatSpeakBehavior.h"
#include "DogSpeakBehavior.h"

// Use this file as the driver for coding problem 2
int main() {

    CatSpeakBehavior cat; 
    cat.speak();
    DogSpeakBehavior dog;
    dog.speak();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
