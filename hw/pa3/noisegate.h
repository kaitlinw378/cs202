//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "Wav.h"
#include "WaveHeader.h"
#include "Processor.h"

#include<iostream>

class NoiseGate : public Processor{

    int threshold;

    public:
    NoiseGate();
    NoiseGate(int);
    void Noisegate(unsigned char*, int);
    void processBuffer(unsigned char* buffer, int bufferSize) override;
    
};


#endif