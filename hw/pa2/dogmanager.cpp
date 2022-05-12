//Author: Kaitlin White
//Date: 2/18/21
//Programming Assignment 2: Using makefile, classes, vectors
//file for DogManager Class

#include "dogmanager.h"
#include "dogtableprinter.h"

using namespace std;

DogManager::DogManager(){
    vector<Dog> doglist;
    void loadDogs(string);
}

DogManager::DogManager(const DogManager & rhs) : doglist(rhs.doglist){}

void DogManager::loadDogs(string file){ 
    ifstream inputFile;
    string temp;
    inputFile.open(file);

    if(!inputFile.good()){
        stringstream error;
        error << "File " << file << " could not be opened" << endl;
            throw runtime_error(error.str());
    }
    string name, breed;
    int age;
    
    while(getline(inputFile, temp)){
        Dog newdog(temp); 

        doglist.emplace_back(newdog); 

    }

    inputFile.close(); 
}

DogManager::DogManager(string filename){
    
    loadDogs(filename);

}

Dog DogManager::oldestDog(){
    Dog oldestDog;
    int oldestage = 0;
    for(Dog type: doglist){
        if(type.getAge() >= oldestage){
            oldestDog = type;
        }
    }
    return oldestDog;
}

void DogManager::printDogs(){
    DogTablePrinter::printDogTable(doglist);
}