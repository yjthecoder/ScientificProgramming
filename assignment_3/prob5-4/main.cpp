// Problem 5.4
// The main function acts as the driver
// It take an argument N as the size of the data,
// then dynamically allocates an array for them
// and pass a pointer to the first element to other
// functions

#include <iostream>
#include "prob5-4.h"

int main(int argc, const char * argv[]) {
    
    // Get number of grid points from command line
    // aruguments as the size of data
    //int N = atoi(argv[1]);
    
    //test
    int N = 100;
    
    // dynamically allocate memory for the numbers
    double *data = new double [N];
    
    GenerateNRandomNmbrs(N, data);
    
    double mean = CalculateMean(N, data);
    // test
    for (int i = 0; i < N; i++) {
        
        cout << data[i] << endl;
    }
    
    cout << "Mean: " << mean << endl;
    
    // release memory
    delete [] data;
    data = nullptr;
    
    return 0;
}
