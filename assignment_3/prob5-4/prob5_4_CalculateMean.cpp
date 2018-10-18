//
//  CalculateMean.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

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
