//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for DogManager class

#ifndef DOGMANAGER_H
#define DOGMANAGER_H

#include<string>
#include<fstream>
#include<stdexcept>
#include<sstream>
#include<iostream>
#include<vector>
#include<algorithm>

#include "dog.h"

class DogManager{

    private:
        std::vector<Dog> doglist;
        void loadDogs(std::string file);

    public:
        DogManager();
        DogManager(const DogManager & rhs);
        DogManager(std::string filename);
        Dog oldestDog();
        void printDogs();

};

#endif