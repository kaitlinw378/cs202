//Author: Kaitlin White
//Date: 3/18/21
//Lab 8 - aggregation
//.cpp file for flea class

#include "flea.h"

using namespace std;

Flea::Flea(string name, string hobby, float age) : name(name), hobby(hobby), age(age) {
    alive = true;
};

void Flea::die(){
    alive = false; 
    cout << "aaaaaaaaaaaaarrrrrrrrrrrrrrggggggggggggghhhhhhhhhh" << endl;
}

