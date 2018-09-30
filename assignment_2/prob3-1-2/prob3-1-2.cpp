/*********************************************************/
/* This program does the same as 3-1-1, exept that it    */
/* flushes the output steam after each line of output.   */
/* Note that there are two lines for two arrays, so I am */
/* using two for loop to implement this                  */
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
    
    // Print out x
    for (int i = 0; i < 4; i++) {
        if (i == 3) {
            outputFile << x[i] << "\n";
            
            // flush before new line
            outputFile.flush();
        } else {
            outputFile << x[i] << " ";
        }
    }
    
    // Print out y
    for (int i = 0; i < 4; i++) {
        if (i == 3){
            outputFile << y[i];
            outputFile.flush();
        } else {
            outputFile << y[i] << " ";
        }
    }

    return 0;
}
