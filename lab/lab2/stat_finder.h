#ifndef STAT_FINDER_H
#define STAT_FINDER_H

#include<iostream>
#include<string>
#include <vector>
#include <numeric>
#include<algorithm>
#include<cmath>


double calculateAverage(std::vector<int> &numbers);
int findMin(std::vector<int> &numbers);
int findMax(std::vector<int> &numbers);
double calculateStdDeviation(std::vector<int> &numbers);

#endif
