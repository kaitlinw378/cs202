//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for DogTablePrinter class

#include "dogtableprinter.h"
#include<iomanip>

using namespace std;

void DogTablePrinter::printDogTable(std::vector<Dog> doglist){

    cout << "Name    Age     Breed " << endl;
    cout << "======================" << endl;
    for(Dog type : doglist){
        cout << type.getName() << "\t" << type.getAge() << "\t" << type.getBreed() << endl;
    }
    
}