/********************************************************/
/* Problem 2.6.3                                        */
/* On top of 2.6.2, for every xi iteration, the program */
/* checks if the difference between two xi is shrinking */
/* or not using an assertion statement. Note that since */
/* we are checking against float numbers, we are using  */
/* a reasonable tolerance of 100 * DBL_EPSILON          */
/********************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cfloat>
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
        
        // Check if the difference between two
        // adjacent xi keeps decrease as i
        // increases, i.e. guess converges to root
        if (i > 1) {
            
            // get the differece of difference
            double diffOfDiffX = fabs(x[i] - x[i-1])
                                 - fabs(x[i-1] - x[i-2]);
            
            // check if it is shrinking
            assert(diffOfDiffX < 100 * DBL_EPSILON);
        }
        
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
    
    return 0;
}
