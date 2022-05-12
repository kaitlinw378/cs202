#include "stat_finder.h"

using namespace std; 

double calculateAverage(vector<int> &numbers) {
    int n = numbers.size();
    double average = accumulate(numbers.begin(),numbers.end(),0.0) / n;
    return average;
}

int findMin(vector<int> &numbers) {
    return *min_element(numbers.begin(),numbers.end());
}

int findMax(vector<int> &numbers) {
    return *max_element(numbers.begin(),numbers.end());
}

double calculateStdDeviation(vector<int> &numbers) {
    // calculate the mean
    double mean = calculateAverage(numbers);
    // calculate the std deviation
    double sum = 0;
    for(auto n : numbers){
        sum += pow(n - mean, 2);
    }
    double stdDev = sqrt(sum / numbers.size());
    return stdDev;
}


