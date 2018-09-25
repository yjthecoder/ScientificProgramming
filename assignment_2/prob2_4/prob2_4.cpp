//
//  main.cpp
//  prob2_4
//
//  Created by YUAN JI on 2018-09-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};
    
    // Decalre the vectors and matrices needs to be calculated
    // initilized them with 0s
    
    double x[3] = {0.0, 0.0, 0.0};
    double y[3] = {0.0, 0.0, 0.0};
    double z[3] = {0.0, 0.0, 0.0};
    
    double C[3][3] = {{0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0}};
    
    double D[3][3] = {{0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0}};
    
    // Calculate vector x = u − v
    for (int i=0; i<3; i++) {
        x[i] = u[i] - v[i];
    }
    
    // Calculate vector y = Au
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            y[i][j] += A[i][j] * u[j];
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
