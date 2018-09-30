/********************************************************/
/* This program initailize two arrays x and y, both of  */
/* four integers. It then prints them out to a file :   */
/* "x_and_y.dat". Note both array are printed out in a  */
/* single for loop, with conditions designed inside to  */
/* handle format correctly.                             */
/********************************************************/

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
    
    for (int i = 0; i < 8; i++) {
        if (i < 4) {
            if (i == 3) {
                outputFile << x[i] << "\n";
            } else {
                outputFile << x[i] << " ";
            }
        } else if (i==7){
            outputFile << y[i-4];
        } else {
            outputFile << y[i-4] << " ";
        }
    }
    
    return 0;
}
