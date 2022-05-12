//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#ifndef ECHO_H
#define ECHO_H

#include "Wav.h"
#include "WaveHeader.h"
#include "Processor.h"

#include<iostream>

class Echo : public Processor{
    
    int delay;

    public: 
        Echo();
        Echo(int);
        void echo(unsigned char*, int);
        void processBuffer(unsigned char* buffer, int bufferSize) override;
};


#endif