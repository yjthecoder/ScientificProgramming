/*******************************************************/
/* Problem 2.6.2                                       */
/* The program calculate the root of given f(x) using  */
/* the Newton-Raphson iteration method. It stores 100  */
/* guesses in an array and prints it out to screen 10  */
/* guesses per line                                    */
/*******************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Declare the array for all 100 xi
    double x[100];
    
    // initialize the x0 with given initial guess 0
    x[0] = 0;
    
    // Calculate all remain 99 xis and print out them
    // along the way, 10 values per line
    
    for (int i = 1; i < 100; i++) {
        
        x[i] = x[i-1] - (exp(x[i-1]) + pow(x[i-1], 3) - 5)
        / (exp(x[i-1]) + 2 * pow(x[i-1], 2));
        if (i == 1) {
            cout.width(8);
            cout << fixed << x[i-1] << " " << x[i] << " ";
        } else if (i % 10 == 9) {
            // Make sure each line show ten values
            cout.width(8);
            cout << x[i] << endl;
        } else {
            cout.width(8);
            cout << x[i] << " ";
        }
    }
    
    
    //    // Caldulate the determinant
    //    double detA = A[1][1] * A[0][0] - A[0][1] * A[1][0];
    //
    //    // Check the determinant is nonzero
    //    assert(detA != 0);
    //
    //    double inverseA[2][2];
    //
    //    // Calculate inverse of A using rules provided
    //    // in textbook A.1.3
    //
    //    for (int i = 0; i < 2; i++) {
    //        for (int j = 0; j < 2; j++) {
    //            if (i != j) {
    //
    //                // negate A[0][1] and A[1][0] and divided by det
    //                inverseA[i][j] = (-1) * A[i][j] / detA;
    //            } else {
    //
    //                // swap A[1][1] and A[1][1] before divided by det
    //                inverseA[i][j] = A[abs(i - 1)][abs(j - 1)] / detA;
    //
    //            }
    //        }
    //    }
    //
    //    // Print inserse of A to the screen
    //    cout << "Inverse of A : "<< endl;
    //    for (int i = 0; i < 2; i++) {
    //        for (int j = 0; j < 2; j++) {
    //            if (j / 1 == 0) {
    //                cout.width(5);
    //                cout << fixed << setprecision(3) << inverseA[i][j] << " ";
    //            } else {
    //                cout.width(5);
    //                cout << fixed << setprecision(3) << inverseA[i][j] << "\n";
    //            }
    //        }
    //    }
    //    cout << endl;
    
    return 0;
}
