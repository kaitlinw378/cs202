//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#include "employee.h"

using namespace std;

Employee::Employee(){
    firstName = "";
    lastName = "";
    employmentStatus = "";
}

Employee::Employee(const string& lastName, const string& firstName, const string& employmentStatus) : lastName(lastName), 
firstName(firstName), employmentStatus(employmentStatus){}
