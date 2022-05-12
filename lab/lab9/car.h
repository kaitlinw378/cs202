//kaitlin white
//date: 3/25/21
//lab 9

#ifndef CAR_H 
#define CAR_H  

#include "vehicle.h"

#include <iostream>
#include <string>

class Car : public Vehicle {

    int numDoors, cspeed;
    std::string direction;

    public: 
    Car();
    Car(int numDoors, std::string direction, int cspeed);
    std::string turn(std::string direction); 

    int speed () override;
    void printDetails() override;
};

#endif