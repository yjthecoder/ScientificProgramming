//
//  Multiply.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-18.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <stdio.h>

double Multiply(int row, int col, double** A, double** B, double** C){
    
    
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
}
