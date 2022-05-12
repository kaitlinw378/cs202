//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "payable.h"

#include<string>
#include<iostream>

/**
 * @brief Employee class. Inherits from IPayable
 * 
 */
class Employee : public IPayable{

    protected:
    std::string firstName;
    std::string lastName;
    std::string employmentStatus;

    public:

    /**
     * @brief Construct a new Employee object
     * 
     */
    Employee();

    /**
     * @brief Parameterized constructor for a new Employee object
     * 
     * @param lastName 
     * @param firstName 
     * @param employmentStatus 
     */
    Employee(const std::string& lastName, const std::string& firstName, const std::string& employmentStatus);

    /**
     * @brief Get the Employment Status object
     * 
     * @param employmentStatus 
     */
    virtual void getEmploymentStatus(std::string employmentStatus) = 0;
    
};

#endif