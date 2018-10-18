// The header file contains common system libraries,
// and namespace std, and most importantly the
// function prototyes. Header guards is used to
// prevent mulitple inclusion.

#ifndef prob5_4_h
#define prob5_4_h

// Include common system header here
#include <stdio.h>
#include <iostream>
using namespace std;


// Function protypes
void GenerateNRandomNmbrs(int size, double* data);

double CalculateMean(int size, double* data);


// Note the default nullptr value for the skew reference
// is implemented using pointer instead of reference variable,
// since C++ forbids giving non-constant reference var a default
// value
void CalculateStdAndSkew(int size, double* data, double& std, double* skew = nullptr);


#endif
