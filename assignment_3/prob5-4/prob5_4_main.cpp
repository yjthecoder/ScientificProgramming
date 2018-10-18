// Problem 5.4
// The main function acts as the driver
// It take an argument N as the size of the data,
// then dynamically allocates an array for them
// and pass a pointer to the first element to other
// functions

#include "prob5_4.h"

int main(int argc, const char * argv[]) {
    
    // Get number of grid points from command line
    // aruguments as the size of data
// int N = atoi(argv[1]);
    
    //test
    int N = 10000;
    
    // Dynamically allocate memory for the data array
    double *data = new double [N];
    
    GenerateNRandomNmbrs(N, data);
    
    double mean = CalculateMean(N, data);
    // test
    for (int i = 0; i < N; i++) {
        
        cout << data[i] << endl;
    }
    
    // Print the mean
    cout << "Mean: " << mean << endl;
    
    
    double std = 0.0;
    CalculateStdAndSkew(N, data, std);
    
    // Print the standard deviation
    cout << "Standard deviation: " << std <<endl;
    
    
    // Calculate the skew by passing the optional 4th var
    double *skew = new double;
    *skew = 0.0;
    CalculateStdAndSkew(N, data, std, skew);
    
    // Print the standard deviation
    cout << "Standard deviation, skew: " << std << ", "<< *skew <<endl;
    
    // Release memory
    delete [] data;
    data = nullptr;
    
    return 0;
}
