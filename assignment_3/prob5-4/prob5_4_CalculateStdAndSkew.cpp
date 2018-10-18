// The function always calculates the
// standard deviation. It only calculates
// the skew if the optional 4th arguments is
// passed from the caller.

#include "prob5_4.h"
#include <cmath>

// Note that the default value for the skew pointer has
// already specified in the prototype, no need to be
// specified here
void CalculateStdAndSkew(int size, double* data, double& std, double* skew) {
    
    // Get the mean of data
    double mean = CalculateMean(size, data);
    
    // Calculate the sum of square of (xi - mean)
    double sumSqDev;
    for (int i = 0; i < size; i++) {
        sumSqDev += pow((data[i] - mean), 2);
    }
    
    // Calculate the standard deviation
    std = sqrt(sumSqDev / (size - 1));
    
    // Calculate the skew only if 4th variable is passed
    // a value other than nullptr
    if (skew) {
        
        // Calculate the sum of the cubic of (xi - mean)
        double sumCubeDev;
        for (int i = 0; i < size; i++) {
            sumCubeDev += pow((data[i] - mean), 3);
        }
        
        // Calculate the skew
        *skew = sumCubeDev / (size * pow(std,3));
    }
}
