//
// Created by Keith Lancaster on 4/6/21.
//

//edited by: kaitlin white 
//date: 4/8/21
//lab 11

#ifndef TEMPLATES_CALCULATOR_H
#define TEMPLATES_CALCULATOR_H


#include <cstdint>

//template<typename T, typename U>

class Calculator {

public:

    template<typename T>
    T add(T a, T b){
        return a + b;
    }

    // int add(int a, int b);
    // float add(float a, float b);
    // int add(uint8_t, short b);
    // float add(int a, short b);
};


#endif //TEMPLATES_CALCULATOR_H
