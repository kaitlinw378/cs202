//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#include "noisegate.h"

using namespace std;

NoiseGate::NoiseGate(){
    threshold = 100;
}

NoiseGate::NoiseGate(int threshold) : threshold(threshold){}

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize){
    Noisegate(buffer, bufferSize);
}

void NoiseGate::Noisegate(unsigned char* buffer, int bufferSize){
    for(int i = 0; i < bufferSize; i++){
        if(buffer[i] > (uint8_t)128 - threshold && buffer[i] < (uint8_t)128 + threshold){
            buffer[i] = (uint8_t)128;
        }
    }
}



// void NoiseGate::noisegate(){
//     for(int i=0; i< size; i++){
//         if(waves.getBuffer()[i] < 25*size){
//             waves.getBuffer()[i] = 0;
//         }
//     }
// } 