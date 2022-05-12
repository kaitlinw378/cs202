//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#include "manager.h"

using namespace std;

Manager::Manager(){
    depName = "";
    storeID = 0;
    salaryPerDay = 0.00;
    daysWorked = 0;
    total = 0.00;
}

Manager::Manager(const string& lastName, const string& firstName, const string& employmentStatus, string depName, int storeID, float salaryPerDay, 
int daysWorked) : Employee(lastName, firstName, employmentStatus), depName(depName), storeID(storeID), salaryPerDay(salaryPerDay), daysWorked(daysWorked){}

Manager::Manager(const Manager& other){
    depName = other.depName; 
    storeID = other.storeID;
    salaryPerDay = other.salaryPerDay;
    daysWorked = other.daysWorked;
    total = other.total;
}

void Manager::getEmploymentStatus(string status){
    if(status == "Active" || status == "Retired" || status == "Dismissed"){
        total = currentPayDue(daysWorked, salaryPerDay);
    }else{
        total = 0.00;
    }
}

ostream& operator<<(ostream& output, const Manager& manager){
    cout << "Manager: " << manager.firstName << " " << manager.lastName << endl;
    cout << "Department: " << manager.depName << endl; 
    cout << "Store location: " << manager.storeID << endl;
    cout << "Employment status: " << manager.employmentStatus << endl;
    cout << "Pay Due: " << fixed << setprecision(2) << manager.total << endl;
    return output;
}
