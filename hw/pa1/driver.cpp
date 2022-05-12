//Author: Kaitlin White
//Date: 2/4/21
//Programming Assignment 1 - file IO, strings, standard IO
//main, getWords, findLongestWord

#include "word_analyzer.h"

using namespace std;

int getWords(int arraySize, string WORDS[], string fileName);
string findLongestWord(int size, string words[]);

int main(int argc, char *argv[]){
    if(argc < 2){
        cout << "Correct usage:" << endl;
        cout << argv[0] << " filename" << endl;
        return 0;
    }
    string fileName = argv[1];
    int arraysize = 50;
    string filewords[arraysize+1];
    int numletters = 0;
    int upperletters = 0;
    int lettersrange = 0;
    string longestword;
    int numWords = getWords(arraysize, filewords, fileName);
    if(numWords == -1){
        cout << "The file " << fileName << " could not be opened" << endl;
    }else{
        int i;
        string word;
        for(int i = 0; i < numWords; i++){
            word = filewords[i];
            numletters += countLetters(word);
            upperletters += countUpperCaseLetters(word);
            lettersrange += countLettersInRange(word, 'a', 'f');
            longestword = findLongestWord(numWords, filewords);
        }
        cout << "There are " << numletters << " letters in your file." << endl;
        cout << "There are " << upperletters << " upper case letters in your file." << endl;
        cout << "There are " << lettersrange << " letters between 'a' and 'f'." << endl;
        cout << "The longest word in this file is \"" << longestword << "\"." << endl;
    }
    return 0;
}

int getWords(int arraySize, string WORDS[], string fileName){
    ifstream inputFile;
    arraySize = 0;
    string temp;
    inputFile.open(fileName);
    if(inputFile.good()){
        while(inputFile >> temp){
            WORDS[arraySize] = temp;
            arraySize++;
        }
        inputFile.close();
        return arraySize;
    } else{
        return -1;
    }
}

string findLongestWord(int size, string words[]){
    string longestWord = words[0]; 
    int i;
    for(int i = 0; i < size; i++){
        string tempstring = words[i];
        if(tempstring.length() > longestWord.length()){
            longestWord = words[i];
        }
        else{
            longestWord = words[i];
        }
    } 
    if(ispunct(longestWord.back())){
        longestWord.pop_back();
    }
    return longestWord;
}
