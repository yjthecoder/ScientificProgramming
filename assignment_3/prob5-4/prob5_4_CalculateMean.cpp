// The function to calculate the
// mean that returns the mean.

#include "prob5_4.h"

double CalculateMean(int size, double* data){
    
    // Calculate sum
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    
    // Calculate and return mean
    return sum / size;
}
