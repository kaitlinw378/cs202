//author: kaitlin white
//date: 2/25/21 
//lab 5 composition 
//.h file for person class

#ifndef PERSON_H
#define PERSON_H

#include<string>
#include<iostream>
#include "stomach.h"
#include "heart.h"

class Person {
    std::string name;
	int rate;
public:

    //Person();
    
    Person(const std::string &name, const int rate);

    virtual ~Person();

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    Stomach stomach;

	Heart heart;

public:
    bool isHealthy();

    void punch();

	bool heartOK();
};


#endif
