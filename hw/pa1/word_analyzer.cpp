//Author: Kaitlin White
//Date: 2/4/21
//Programming Assignment 1 - file IO, strings, standard IO
//countLetters, countUpperCaseLetters, countLettersInRange

#include "word_analyzer.h"

#include<fstream>

using namespace std; 

int countLetters(string word){
    int lettercount = 0, i;
    for(int i =0; i < word.size(); i++){
        if(word[i] >= 65 && word[i] <= 90){
            lettercount++;
        }else if (word[i] >= 97 and word[i] <= 122){
            lettercount++;
        }else{
            continue;
        }
    }
    return lettercount;
}

int countUpperCaseLetters(string word){
    int uppercount = 0, i;
    for(int i=0; i<word.size();i++){
        if(word[i] >= 65 && word[i] <= 90){
            uppercount++;
        }else{
            continue;
        }
    }
    return uppercount;
}

int countLettersInRange(string word, char lower, char upper){
    int rangecount = 0, i;
    for(int i=0; i < word.size(); i++){
        if(word[i]>= lower && word[i] <= upper){
            rangecount++;
        }else{
            continue;
        }
    }
    return rangecount;
}
