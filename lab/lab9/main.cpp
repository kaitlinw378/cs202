//kaitlin white
//date: 3/25/21
//lab 9

#include "plane.h"
#include "car.h"

#include <iostream>

#include "vehicle.h"

#include <vector>


int main() {
    std::vector<Vehicle*> vehicles;
    vehicles.push_back(new Plane(50, "left", 40));
    vehicles.push_back(new Car(4, "right", 30));
    for(Vehicle* i: vehicles){
        i->printDetails();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
