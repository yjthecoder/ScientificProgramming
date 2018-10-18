// The function to populate the array of
// specified size with random double numbers
// within [0.0, 1.0]

#include "prob5_4.h"

#include <stdlib.h>
#include <time.h>

void GenerateNRandomNmbrs(int size, double* data) {
    
    int randomint;
    double randomdoub;
    
    // Initialize random seed
    srand ((unsigned) time(NULL));
    
    for (int i = 0; i < size; i++) {
        
        // Generate a random number and put it in
        // the data array
        randomint = rand();
        randomdoub= static_cast<double>(randomint) / RAND_MAX;
        
        data[i] = randomdoub;
    }
    
}
