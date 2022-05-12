#include <iostream>
#include "dog.h"
int main() {

    Dog * dog;
    dog->getFleaNames(); 
    Flea * tim = new Flea("Tim", "flying", 23.5);
    Flea * Hudson = new Flea("Hudson", "CS", 22.7);
    Flea * Sarah = new Flea("Sarah", "tv", 21.47);
    Flea * Melanie = new Flea("Melanie", "sports", 22.6);
    dog->getFleaNames();
    for(int i = 0; i <3; i++){
        dog->scratch();
    }
    dog->getFleaNames();

    return 0;
}
