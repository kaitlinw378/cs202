/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

//edited by: kaitlin white
//date: 3/28/21
//pa 4

#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

#include "employee.h"
#include "manager.h"
#include "shopworker.h"
#include "payable.h"

using namespace std;

const int NUM_ARGS = 2;

/**
 * @brief main function
 * 
 * @param argc - name of executable
 * @param argv - name of text file
 * @return int 
 */
int main(int argc, char const *argv[]) {
    if(argc < NUM_ARGS){
        cout << "Correct usage:" << endl;
        cout << argv[0] << " filename" << endl;
        return 0;
    }
    string file = argv[1];
    ifstream inputFile; 
    inputFile.open(file); 
    if(!inputFile.good()){
        cout << "The file " << file << " could not be opened." << endl;
    }
    string temp;
    vector<Employee*> employees;
    while(getline(inputFile, temp)){
        if(temp.find("****") == 0){
            continue;
        }
        istringstream ss(temp);
        string title, ln, fn, ws, dp, sp; 
        int sid, hw;
        float pay; 
        
        if(ss.str().find("Manager") != string::npos){
            while(ss >> title >> ln >> fn >> ws >> dp >> sid >> pay >> hw){
                Manager *m = new Manager(ln, fn, ws, dp, sid, pay, hw);
                m->getEmploymentStatus(ws);
                employees.push_back(m);
            }
        }else if(ss.str().find("ShopWorker") != string::npos){
            while(ss >> title >> ln >> fn >> ws >> dp >> sp >> sid >> pay >> hw){
                ShopWorker *sw = new ShopWorker(ln, fn, ws, dp, sp, sid, pay, hw);
                sw->getEmploymentStatus(ws);
                employees.push_back(sw);
            }
        }else{
            break;
        }
    }
    inputFile.close();
    for (Employee *emp: employees) {
        if(auto * manager = dynamic_cast<Manager*>(emp)) {
            std::cout << (*manager) << std::endl;
        } else {
            std::cout << *(dynamic_cast<ShopWorker*>(emp)) << std::endl;
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
