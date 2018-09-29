/********************************************************/
/* This program does the same thing as in 2.6.4 except  */
/* that use a while statement to perform checking on the*/
/* difference. The iteration terminates when            */
/* |x_next-x_prev| < ε.                                 */
/* We then recompile and run the program with different */
/* values of ε to verify the result.                    */
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
    
    // Initialize the x0 with given initial guess 0
    x_prev = 0;
    x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)
                       / (exp(x_prev) + 2 * pow(x_prev, 2));
    
    
    // Print out the first two guess no matter what
    cout.width(8);
    cout << fixed << x_prev << " " << x_next << " ";
    
    // Initialize the first difference x1-x0
    double prevXdiff = fabs(x_next);
    
    // Initialize the threshold epsilon
    double epsi = 1.0e5 * DBL_EPSILON;
    
    // Keep track of the number of guesses after 0
    int counter = 1;
    
    while (!(fabs(x_next - x_prev) < epsi)) {
        
        // Advance to the next guess
        x_prev = x_next;
        
        x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)
                           / (exp(x_prev) + 2 * pow(x_prev, 2));
        
        // Sych counter with current guess
        counter++;
        
        
        // The modified confidence check from 2.6.3
        // here it also prevent infinite loop if
        // the guesses do not converge
       
        // Calculate the difference between current
        // guess and the guess before
        double curXdiff = fabs(x_next - x_prev);
            
        // Get the differece of difference
        double diffOfDiffX = curXdiff - prevXdiff;
        
        // Check if it is shrinking
        assert(diffOfDiffX < 100 * DBL_EPSILON);
            
        // Update prevXdiff
        prevXdiff = curXdiff;
        
        
        
        // Print out the guess
        if (counter % 10 == 9) {
            
            // Make sure each line show ten values
            cout.width(8);
            cout << x_next << endl;
        } else {
            cout.width(8);
            cout << x_next << " ";
        }
        
    }
    
    // Print a blank line to make output easy
    // to be visually separated from each other
    cout << endl;
    
    return 0;
}
