//
//  GenerateNRandomNmbrs.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GenerateNRandomNmbrs(int size, double* data) {
    
    int randomint;
    double randomdoub;
    
    // initialize random seed
    srand ((unsigned) time(NULL));
    
    for (int i = 0; i < size; i++) {
        
        // generate a random number and put it in
        // the array
        randomint = rand();
        randomdoub= static_cast<double>(randomint) / RAND_MAX;
        
        data[i] = randomdoub;
    }
    
}
