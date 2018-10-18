//
//  CalculateMean.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <stdio.h>

double CalculateMean(int size, double* data){
    
    // calculate sum
    double sum;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    
    // calculate and return mean
    return sum / size;
}
