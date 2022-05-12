//kaitlin white
//date: 3/25/21
//lab 9

#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
#include<iostream>

class Vehicle{

    int size, speeds;
    std::string move;

    public:

    Vehicle();
    Vehicle(int size , std::string move, int speeds);
    virtual int speed() = 0;

    //public:
    virtual void printDetails() = 0;

};


#endif