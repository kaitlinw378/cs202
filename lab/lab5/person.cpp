//author: kaitlin white
//date: 2/25/21
//lab 4 composition
//cpp file for person class

#include "person.h"

Person::Person(const std::string &name, const int rate) : name(name), heart(rate) {
	std::cout << "person constructor" << std::endl;
    }

Person::~Person() {
	std::cout << "person destructor" << std::endl;
    }

const std::string &Person::getName() const{
	return name;
    }

void Person::setName(const std::string &name) {
	Person::name = name;
    }

bool Person::isHealthy(){
	return stomach.statusCheck();
    }

void Person::punch() {
	stomach.gotHit();
    }

bool Person::heartOK(){
	heart.ok();
}


