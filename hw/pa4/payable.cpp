//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#include "payable.h"

float IPayable::currentPayDue(int timeWorked, float payAmount){
    return payAmount *timeWorked;
}
