/********************************************************/
/* Problem 2.6.4                                        */
/* This program does the same thing as in 2.6.3 except  */
/* that instead of using an array of 100 integers to    */
/* store the guesses, it only use two two scalar        */
/* variables, x_prev and x_next. The program modifies   */
/* them as iterates and output them on the go.          */
/********************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <cfloat>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Declare the array for all 100 xi
    double x_prev;
    double x_next;
    
    // initialize the x0 with given initial guess 0
    x_prev = 0;
    
    // Declare a variable for difference for the
    // two xi before the guess
    double prevXdiff;
    for (int i = 1; i < 100; i++) {
        
        x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)
                          / (exp(x_prev) + 2 * pow(x_prev, 2));
        
        if (i == 1) {
            prevXdiff = fabs(x_next);
        }
        
        // Check if the difference between two
        // adjacent xi keeps decrease as i
        // increases, i.e. guess converges to root
        if (i > 1) {
            
            // Initialize the difference of current guess
            double curXdiff = fabs(x_next - x_prev);
            
            // Get the differece of difference
            double diffOfDiffX = curXdiff - prevXdiff;
            
            // Check if it is shrinking
            assert(diffOfDiffX < 100 * DBL_EPSILON);
            
            // Update prevXdiff
            prevXdiff = curXdiff;
        }
        
        if (i == 1) {
            
            cout.width(8);
            cout << fixed << x_prev << " " << x_next << " ";
        } else if (i % 10 == 9) {
            
            // Make sure each line show ten values
            cout.width(8);
            cout << x_next << endl;
        } else {
            cout.width(8);
            cout << x_next << " ";
        }
        
        // Advance to the next guess
        x_prev = x_next;
        
    }
    
    return 0;
}
