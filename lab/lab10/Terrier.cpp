//author: kaitlin white
//date: 4/1/21
//lab 10 

#include "Terrier.h"

using namespace std;

Terrier::Terrier(const string &name) : Dog(name){}

void Terrier::eat(int amount){
    amountEaten += amount;
}

void Terrier::speak(string text){
    cout << text << endl;
}

void Terrier::speak(string text, int volume){
    cout << "Speaking " << text << " at volume " << volume << endl;
}

ostream& operator << (ostream& out, const Terrier& terrier){
    cout << "Name:" << terrier.name << endl;
    cout << "Amount eaten: " << terrier.amountEaten;
    return out;
}
