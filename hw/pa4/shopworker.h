//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#ifndef SHOPWORKER_H
#define SHOPWORKER_H

#include "employee.h"

#include<string>
#include<iostream>
#include<iomanip>

/**
 * @brief ShopWorker class. Inherits from Employee class
 * 
 */
class ShopWorker : public Employee{

    std::string dptName, shopP;
    int hoursW, shopID;
    float hourlyR, totalP;

    public: 
    /**
     * @brief Construct a new Shop Worker object
     * 
     */
    ShopWorker();

    /**
     * @brief Parameterized construct for a new Shop Worker object
     * 
     * @param lastName - last name of the ShopWorker
     * @param firstName - first name of the ShopWorker
     * @param employS - employment status of the ShopWorker
     */
    ShopWorker(const std::string& lastName, const std::string& firstName, const std::string& employS, std::string, std::string, int, float, int);

    /**
     * @brief Copy constructor for a new Shop Worker object
     * 
     * @param other - copy parameter
     */
    ShopWorker(const ShopWorker& other);

    /**
     * @brief Get the Employment Status object
     * 
     */
    void getEmploymentStatus(std::string) override;

    /**
     * @brief operator overload for printing ShopWorkers
     * 
     * @param output 
     * @param shopworker 
     * @return std::ostream& 
     */
    friend std::ostream& operator<<(std::ostream& output, const ShopWorker& shopworker);

};

#endif