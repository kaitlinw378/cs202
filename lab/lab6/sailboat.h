//
// Created by Keith Lancaster on 3/3/21.
//

//edited by: Kaitlin White
//Date: 3/5/21
//lab 6 inheritance

#ifndef MIDTERM_REVIEW_KL_SPEEDBOAT_H
#define MIDTERM_REVIEW_KL_SPEEDBOAT_H

#include "boat.h"
#include<iostream>

class SailBoat: public Boat {
    int numSails;
 
    public:
        SailBoat();
        SailBoat(int numSails);
        int getSails(int newSails) const;
        void setSails(int newSails);
       ~SailBoat();
};


#endif //MIDTERM_REVIEW_KL_SPEEDBOAT_H
