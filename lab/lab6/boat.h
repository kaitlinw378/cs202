//
// Created by Keith Lancaster on 3/3/21.
//

//edited by Kaitlin White
//Date: 3/5/21
//lab 6

#ifndef MIDTERM_REVIEW_KL_BOAT_H
#define MIDTERM_REVIEW_KL_BOAT_H

#include <string>
#include<iostream>

class Boat {
    std::string name;
    
    bool hasMotor;
    int length;
    public: 
        Boat();
        Boat(std::string name, int length, bool hasMotor);
        std::string getName(std::string newName) const;
        void setName(std::string newName);
        int getLength(int newLength) const;
        void setLength(int newLength);
        
        void sink();

};


#endif //MIDTERM_REVIEW_KL_BOAT_H
