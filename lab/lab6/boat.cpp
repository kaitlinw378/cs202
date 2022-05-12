//
// Created by Keith Lancaster on 3/3/21.
//

//edited by Kaitlin White
//Date: 3/5/21
//Lab 6

#include "boat.h"

using namespace std;

Boat::Boat(){
    name = "";
    length = 0;
    hasMotor = true;
}

Boat::Boat(string name, int length, bool hasMotor) : name(name), length(length), hasMotor(hasMotor){}; 

void Boat::sink(){
    cout << "The boat sank" << endl;
}

string Boat::getName(string newName) const {
    return newName;
}

void Boat::setName(string newName){
    name = newName;
}

int Boat::getLength(int newLength) const {
    return newLength;
}

void Boat::setLength(int newLength){
    length = newLength;
}

