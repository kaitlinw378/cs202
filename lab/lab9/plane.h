//kaitlin white
//date: 3/25/21
//lab 9

#ifndef PLANE_H 
#define PLANE_H 

#include "vehicle.h"

#include <string>
#include <iostream>

class Plane : public Vehicle{

    int wingspan, pspeed;
    std::string bankdir;

    public:
    Plane();
    Plane(int wingspan, std::string bankdir, int pspeed);
    std::string bank();
    int speed() override;

    void printDetails() override;

};


#endif