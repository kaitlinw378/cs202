#include "stat_finder.h"
using namespace std;

int main() {
    vector<int> nums{10,1,4,7,0,7,15,3,1,1,3,9};
    double average = calculateAverage(nums);
    int min = findMin(nums);
    int max = findMax(nums);
    double standardDeviation = calculateStdDeviation(nums);
    cout.precision(2);
    cout << "Average Value: " << average << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;
    cout << "Minimum Value: " << min << endl;
    cout << "Maximum Value: " << max << endl;

    return 0;
}


