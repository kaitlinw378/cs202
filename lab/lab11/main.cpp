#include <iostream>
#include "Calculator.h"
//#include "Calculator.cpp"

int main() {
    
    auto * calc = new Calculator;
    int output1 = calc->add(4,2);
    std::cout << output1 << std::endl;

    float output2 = calc->add(1.2, 2.2);
    std::cout << output2 << std::endl;

    int output3 = calc->add(255, 32767);
    std::cout << output3 << std::endl;

    float output4 = calc->add(4, 32767);
    std::cout << output4 << std::endl;
    
    // Calculator<int, short>* calc4 = new Calculator<int, short>;

    return 0;

}
