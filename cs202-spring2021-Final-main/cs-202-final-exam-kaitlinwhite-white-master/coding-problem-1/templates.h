//author:kaitlin white
//date: 5/6/21
//final exam coding problem 1

#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>

template <typename T>
std::vector<T> myFunction(T , int count){
    std::vector<T> finalVec(count);
    return finalVec;
}

#endif