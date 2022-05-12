//Author: Kaitlin White
//Date: 3/18/21
//Lab 8 - aggregation
//.cpp file for dog class

#include "dog.h"

using namespace std;

Dog::Dog(string name) : name(name) {};

Flea* flea = new Flea("", "", 0.0);

void Dog::addFlea( Flea * flea){
    
    fleas.push_back(flea);
}

void Dog::scratch(){
    flea->die();
    fleas.erase(fleas.begin());
}

void Dog::getFleaNames(){
    if(fleas.size()>0){
        for(int i =0; i < fleas.size(); i++){
            cout << fleas.at(0) << endl;
        }
    }else{
        cout << "No fleas on me!" << endl;
    }
}