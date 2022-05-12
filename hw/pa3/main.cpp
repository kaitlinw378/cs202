#include <iostream>
#include <string>
#include "Wav.h"
#include "Processor.h"

#include "echo.h"
#include "limiter.h"
#include "noisegate.h"

const std::string testfile = "testing.wav";
const std::string echofile = "echos.wav";
const std::string limitfile = "limit.wav";
const std::string noisefile = "noise.wav";
int main() {
    // Uncomment these lines when ready.

    Wav wav;
    wav.readFile(testfile);
    Processor *processor = new Echo(50000);
    processor->processBuffer(wav.getBuffer(),wav.getBufferSize());
    wav.writeFile("echos.wav");

//    Follow the pattern above to generate the limit and noise files
//    using the filenames provided

    wav.readFile(testfile);
    processor = new Limiter();
    processor->processBuffer(wav.getBuffer(), wav.getBufferSize());
    wav.writeFile("limit.wav");

    wav.readFile(testfile);
    processor = new NoiseGate(10);
    processor->processBuffer(wav.getBuffer(), wav.getBufferSize());
    wav.writeFile("noise.wav");

    return 0;
}
