//kaitlin white
//lab 9

#include "vehicle.h"

using namespace std;

Vehicle::Vehicle(){
    size = 0;
    move = "none";
    speeds =0;
}

Vehicle::Vehicle(int size, string move, int speeds) : size(size), move(move), speeds(speeds){};

