//author: kaitlin white
//date: 5/6/21
//semester final coding problem 2

#include "cat.h"

Cat::Cat(int age) : age(age){}

std::ostream& operator<<(std::ostream& output, const Cat& cat){
    std::cout << "Cat age: " << cat.age;
    return output;
}