//kaitlin white
//date: 3/25/21
//lab 9

#include "plane.h"

using namespace std;

Plane::Plane(){
    wingspan = 0;
    bankdir = "straight";
    pspeed = 0;
}

Plane::Plane(int wingspan, std::string bankdir, int pspeed): wingspan(wingspan), bankdir(bankdir), pspeed(pspeed){};

string Plane::bank(){
    return bankdir;
}

int Plane::speed(){
    return pspeed;
}

void Plane::printDetails(){
    cout << "Plane: wingspan, direction, speed: " << wingspan << " " << bankdir << " " << pspeed << endl;
}

