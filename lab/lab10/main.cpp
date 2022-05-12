
/** @file */
#include <iostream>
#include "Terrier.h"

/**
 * Main entry point to the application
 *
 * _NOTE_: The code to be used in this function is shown on the main
 * documentation page and on the README
 * @return
 */
int main() {
    Terrier* terrier = new Terrier("Todd");
    terrier->eat(10);
    terrier->speak("yip yip");
    terrier->speak("yip",5);
    std::cout << *terrier << std::endl;
    return 0;
}
