//author: kaitlin white
//date: 3/28/21
//pa 4 - interfaces, operator overloading, friend functions

#include "shopworker.h"

using namespace std;

ShopWorker::ShopWorker(){
    dptName = "";
    shopP = "";
    hoursW = 0;
    hourlyR = 0.00;
    shopID = 0;
    totalP = 0.00;
}

ShopWorker::ShopWorker(const string& lastName, const string& firstName, const string& employS, string dptName, string shopP, 
int shopID, float hourlyR, int hoursW) : Employee(lastName, firstName, employS), dptName(dptName), shopP(shopP), shopID(shopID), hourlyR(hourlyR), hoursW(hoursW){}

ShopWorker::ShopWorker(const ShopWorker& other){
    dptName = other.dptName;
    shopP = other.shopP;
    hoursW = other.hoursW;
    hourlyR = other.hourlyR;
    shopID = other.shopID;
    totalP = other.totalP;
}

void ShopWorker::getEmploymentStatus(std::string stat){
    if(stat == "Active" || stat == "Retired" || stat == "Dismissed"){
        totalP = currentPayDue(hoursW, hourlyR);
    }else{
        totalP = 0.00;
    }
}

ostream& operator<<(ostream& output, const ShopWorker& shopworker){
    cout << "ShopWorker: " << shopworker.firstName << " " << shopworker.lastName << endl;
    cout << "Department: " << shopworker.dptName << endl;
    cout << "Store Phone Number: " << shopworker.shopP << endl; 
    cout << "Store ID: " << shopworker.shopID << endl;
    cout << "Employment Status: " << shopworker.employmentStatus << endl;
    cout << "Total Pay Due: " << fixed << setprecision(2) << shopworker.totalP << endl;
    return output;
}
