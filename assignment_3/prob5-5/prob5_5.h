// The header file includs common system libraries,
// and namespace std, and most importantly the
// function prototyes. Header guards is used to
// prevent mulitple inclusion.

#ifndef prob5_5_h
#define prob5_5_h

// include common system header here
#include <stdio.h>
#include <iostream>
#include <cassert>

using namespace std;

// function protypes
void Multiply(int Arows, int Acols, int Brows,
              int Bcols, double** A, double** B, double** C);

#endif /* prob5_5_h */
