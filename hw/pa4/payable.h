//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#ifndef PAYABLE_H
#define PAYABLE_H 

/**
 * @brief IPayable interface
 * 
 */
class IPayable{

    public: 
    /**
     * @brief calculators the current pay due using time worked and pay rate
     * 
     * @param timeWorked 
     * @param payAmount 
     * @return float 
     */
    float currentPayDue(int timeWorked, float payAmount);

};

#endif