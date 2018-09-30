/**********************************************************/
/* Problem 3.3                                            */
/* This program follows the logical instruction provided  */
/* in the hand-written description on previous page.      */
/* Crutial steps are also emphasised by inline comments.  */
/**********************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    
    // Get number of grid points from command line
    // aruguments
    int N = atoi(argv[1]);;
    
    // Calculate the step size h with in [0,1]
    double h = (1.0 - 0.0) / N;
    
    ofstream outputFile("xy.dat");
    assert(outputFile.is_open());
    
    // Set precision
    outputFile.precision(6);
    
    // Set scientific notation
    outputFile.setf(ios::scientific);
    
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
        
        // Print xi and yi on each line followed
        // by "\n" at end of each line
        outputFile << xi << " " << yi << "\n";

    }
    
    return 0;
}
