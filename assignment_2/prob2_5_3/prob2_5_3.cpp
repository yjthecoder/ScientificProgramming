/***********************************************************/
/* Problem 2.5.3                                           */
/* On top of 2.5.2 the program checks wether the calculated*/
/* determinant is 0, if it is, then program terminate with */
/* 'Assertion failed' prompts*/
/***********************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cfloat>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Initialize matrix A
    double A[2][2] = {{4.0, 4.0 + 1.0e-20},
                      {1.0, 1.0}};
    
    // Caldulate the determinant
    double detA = A[1][1] * A[0][0] - A[0][1] * A[1][0];

    // Check the determinant is nonzero
    // Note it is good practice to compare
    // float numbers within a reasonable tolerance
    assert(fabs(detA) >  100 * DBL_EPSILON);
    
    //if assertion passed, initialize the inverse matrix
    double inverseA[2][2];
    
    // Calculate inverse of A using rules provided
    // in textbook A.1.3
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i != j) {
                
                // negate A[0][1] and A[1][0] and divided by det
                inverseA[i][j] = (-1) * A[i][j] / detA;
            } else {
                
                // swap A[1][1] and A[1][1] before divided by det
                inverseA[i][j] = A[abs(i - 1)][abs(j - 1)] / detA;
                
            }
        }
    }
    
    // Print inserse of A to the screen
    cout << "Inverse of A : "<< endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (j / 1 == 0) {
                cout.width(5);
                cout  << setprecision(3) << inverseA[i][j] << " ";
            } else {
                cout.width(5);
                cout  << setprecision(3) << inverseA[i][j] << "\n";
            }
        }
    }
    cout << endl;
    
    return 0;
}
