//kaitlin white
//date: 3/25/21
//lab 9

#include "car.h"

using namespace std;

Car::Car(){
    numDoors = 0;
    direction = "forward";
    cspeed = 0;
}

Car::Car(int numDoors, string direction, int cspeed): numDoors(numDoors), direction(direction), cspeed(cspeed){};

string Car::turn(string direction){
    return direction;
}

int Car::speed(){
    return cspeed;
}

void Car::printDetails(){
    cout << "Car: numDoors, direction, speed: " << numDoors << " " << direction << " " << cspeed << endl;
}

