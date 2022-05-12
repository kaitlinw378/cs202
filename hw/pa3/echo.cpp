//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#include "echo.h"

Echo::Echo(){
    delay = 0;
}

Echo::Echo(int delay) : delay(delay){}

void Echo::processBuffer(unsigned char* buffer, int bufferSize){
    echo(buffer, bufferSize);
}

void Echo::echo(unsigned char* buffer, int bufferSize){
    for(int i =0; i < bufferSize; i++){
        buffer[i] = (buffer[i]/(uint8_t)2) - (buffer[i-delay]/(uint8_t)3); 
    }
}
