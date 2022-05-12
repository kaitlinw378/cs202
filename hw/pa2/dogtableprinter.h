//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for DogTablePrinter Class

#ifndef DOGTABLEPRINTER_H
#define DOGTABLEPRINTER_H

#include "dogmanager.h"
#include<string>
#include<iostream>
#include<vector>

class DogTablePrinter{

    private:
        DogManager dogmanager;

    public:
        static void printDogTable(std::vector<Dog>);

};


#endif