/**************************************************************/
/* 3-3-difference                                             */
/* This program genrates the data of x and its corresponding  */
/* difference of exp(-x) and y from implicit Euler method     */
/* Plot generated from the data should give a direct intuition*/
/* of how close we get to exact function.                     */
/**************************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    
    // Get number of grid points from command line
    // aruguments
    int N = atoi(argv[1]);;
    
    // Calculate the step size h with in [0,1]
    double h = (1.0 - 0.0) / N;
    
    ofstream outputFile("x-difference.dat");
    assert(outputFile.is_open());
    
    // Set precision
    outputFile.precision(6);
    
    // Set scientific notation
    // outputFile.setf(ios::scientific);
    
    // Set up initial value x0 and y0
    double xi = 0.0;
    double yi = 1.0;
    
    
    // Print out to xy.dat
    for (int i = 0; i < N; i++) {
        
        xi = i * h;
        
        if (i == 0) {
            yi = 1;
        } else {
            yi = yi / (1 + h);
        }
        
        // Print xi and the difference between yi and exp(-xi)
        // on each line followed by "\n" at end of each line
        outputFile << xi << " " << fabs(yi - exp(-xi))  << "\n";
        outputFile.flush();
    }
    
    return 0;
}
