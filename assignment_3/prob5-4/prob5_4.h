//
//  prob5-4.h
//  assignment_3
//
//  Created by YUAN JI on 2018-10-17.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#ifndef prob5_4_h
#define prob5_4_h

// Include common system header here
#include <stdio.h>
#include <iostream>
using namespace std;


// Function protypes
void GenerateNRandomNmbrs(int size, double* data);

double CalculateMean(int size, double* data);

void CalculateStdAndSkew(int size, double* data, double& std, double* skew = nullptr);


#endif
