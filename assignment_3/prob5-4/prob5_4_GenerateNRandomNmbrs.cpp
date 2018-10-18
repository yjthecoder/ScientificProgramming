//
//  GenerateNRandomNmbrs.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

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
