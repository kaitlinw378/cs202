//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#ifndef MANAGER_H
#define MANAGER_H

#include"employee.h"

#include<string>
#include<iostream>
#include<iomanip>

/**
 * @brief Manager class. Inherits from Employee class
 * 
 */
class Manager : public Employee{

    std::string depName;
    int storeID;
    float salaryPerDay, total;
    int daysWorked;

    public: 

    /**
     * @brief Construct a new Manager object
     * 
     */
    Manager();

    /**
     * @brief Parameterized constructor for a new Manager object
     * 
     * @param lastName 
     * @param firstName 
     * @param employmentStatus 
     */
    Manager(const std::string& lastName, const std::string& firstName, const std::string& employmentStatus, std::string, int, float, int);
    
    /**
     * @brief copy constructor for a new Manager object
     * 
     * @param other - copy parameter
     */
    Manager(const Manager& other);

    /**
     * @brief Get the Employment Status object
     * 
     */
    void getEmploymentStatus(std::string) override;

    /**
     * @brief operator overload for printing managers
     * 
     * @param output 
     * @param manager 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& output, const Manager& manager);

};

#endif