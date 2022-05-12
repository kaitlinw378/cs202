//author: kaitlin white
//date: 3/18/21
//programming assignment 3

#ifndef LIMITER_H
#define LIMITER_H

#include "Processor.h"
#include "Wav.h"
#include "WaveHeader.h"

#include <string>
#include <iostream>

class Limiter : public Processor{
    // float maxval;
    // float limiter;

    public:
        void Limit(unsigned char*, int);
        void processBuffer(unsigned char* buffer, int bufferSize) override;
};

#endif