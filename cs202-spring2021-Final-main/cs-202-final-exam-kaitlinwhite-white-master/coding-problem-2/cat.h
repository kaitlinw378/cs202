//author: kaitlin white
//date:5/6/21
//semester final coding problem 2

#ifndef CAT_H
#define CAT_H

#include<iostream>
#include<string>

class Cat{
    int age;
public:
    Cat(int age);
    friend std::ostream& operator<<(std::ostream& ouput, const Cat& cat);
};

#endif