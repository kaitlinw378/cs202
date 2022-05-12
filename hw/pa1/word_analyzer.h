//Author: Kaitlin White
//Date: 2/4/21
//Programming Assignment 1 - file IO, strings, standard IO

#ifndef WORD_ANALYZER_H
#define WORD_ANALYZER_H

#include<iostream>
#include<string>
#include<fstream>

int countLetters(std::string word);
int countLettersInRange(std::string word, char lower, char upper);
int countUpperCaseLetters(std::string word);

#endif