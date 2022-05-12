//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#include "limiter.h"

using namespace std;

void Limiter::processBuffer(unsigned char* buffer, int bufferSize){
    Limit(buffer, bufferSize);
}

void Limiter::Limit(unsigned char* buffer, int bufferSize){
    
    for(int i =0; i < bufferSize; i++){
        if(buffer[i] > (uint8_t)128 + ((uint8_t)127 * 0.8)){
            buffer[i] = buffer[i] > (uint8_t)128 + ((uint8_t)127 * 0.8);
        }else if(buffer[i] < (uint8_t)128 + ((uint8_t)127 * 0.8)){
            buffer[i] = buffer[i] > (uint8_t)128 - ((uint8_t)127 * 0.8);
        }
    }
}



// void Limiter::limit(){
//     float size = wh.getBufferSize();
//     float maxval = wh.getBuffer()[0];
    
//     for(int i=0; i< size; i++){
//         if(wh.getBuffer()[i] < maxval){
//             wh.getBuffer()[i] = maxval;
//         }
//     }
//     float limiter = 0.8*maxval;
//     processBuffer(wh.getBuffer(), limiter);
// }

