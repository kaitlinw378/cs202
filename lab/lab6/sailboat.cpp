//
// Created by Keith Lancaster on 3/3/21.
//

//edited by Kaitlin White
//Date: 3/5/21
//lab 6

#include "sailboat.h"

using namespace std;

SailBoat::SailBoat(){
    numSails = 0;
}

SailBoat::SailBoat(int numSails): numSails(numSails){};

int SailBoat::getSails(int newSails) const{
    return newSails;
}

void SailBoat::setSails(int newSails){
    numSails = newSails;
}

SailBoat::~SailBoat(){
    cout << "in the destr" << endl;
}
