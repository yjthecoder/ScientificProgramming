//
//  main.cpp
//  fileGenerator
//
//  Created by YUAN JI on 2018-09-30.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

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
