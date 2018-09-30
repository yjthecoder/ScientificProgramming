/*********************************************************/
/* This program does the same as 3-1-2, except that the  */
/* output format has the precision set to 10 significant */
/* figures, in scientific notation, and plus signs are   */
/* shown for positive numbers.                           */
/*********************************************************/

#include <iostream>
#include <fstream>
#include <cassert>

#include <iomanip>
#include <cmath>
#include <cfloat>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};
    
    ofstream outputFile("x_and_y.dat");
    assert(outputFile.is_open());
    
    // Set precision
    outputFile.precision(10);
    
    // Set scientific notation
    outputFile.setf(ios::scientific);
    
    // Set show sign
    outputFile.setf(ios::showpos);
    
    // Print out x
    for (int i = 0; i < 4; i++) {
        if (i == 3) {
            
            // Print out in  scientific notation
            outputFile << x[i] << "\n";
        } else {
            outputFile << x[i] << " ";
        }
    }
    
    // flush before new line
    outputFile.flush();
    
    // Print out y
    for (int i = 0; i < 4; i++) {
        if (i == 3){
            outputFile << y[i];
        } else {
            outputFile << y[i] << " ";
        }
    }
    outputFile.flush();
    
    return 0;
}
