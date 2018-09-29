/********************************************************/
/* This program does the same thing as in 2.6.4 except  */
/* that use a while statement to perform checking on the*/
/* difference. The iteration terminates when            */
/* |x_next-x_prev| < ε.                                 */
/* We then recompile and run the program with different */
/* value of ε to verify the result.                     */
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
    
    // Initialize the threshold epsilon
    double epsi = 1.0e10 * DBL_EPSILON;
    
    // initialize the x0 with given initial guess 0
    x_prev = 0;
    x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)
    / (exp(x_prev) + 2 * pow(x_prev, 2));
    
    cout << fixed << x_prev << " " << x_next << " ";
    
    // Declare a variable for the difference of
    // the two xi before the current guess
    //    double prevXdiff;
    
    int counter = 1;
    
    while ((x_next - x_prev) >= epsi) {
        
        x_next = x_prev - (exp(x_prev) + pow(x_prev, 3) - 5)
        / (exp(x_prev) + 2 * pow(x_prev, 2));
        
        //        if (i == 1) {
        //            prevXdiff = fabs(x_next);
        //        }
        
        //        // Check if the difference between two
        //        // adjacent xi keeps decrease as i
        //        // increases, i.e. guess converges to root
        //        if (i > 1) {
        //
        //            // Initialize the difference of current guess
        //            double curXdiff = fabs(x_next - x_prev);
        //
        //            // Get the differece of difference
        //            double diffOfDiffX = curXdiff - prevXdiff;
        //
        //            // Check if it is shrinking
        //            assert(diffOfDiffX < 100 * DBL_EPSILON);
        //
        //            // Update prevXdiff
        //            prevXdiff = curXdiff;
        //        }
        
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
