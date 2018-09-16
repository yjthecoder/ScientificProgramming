/*
declares two vectors as arrays of double precision floating point numbers of length 3 and assigns values to each of the entries.
 
 Extend this code so that it calculates the scalar (dot) product of these vectors and prints it to screen. Finally, extend the code so that it prints the Euclidean norm of both vectors to screen.
 
 */

#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // Declare two vectors as required
    double v1[3] = {1.0 ,-2.0 ,3.0};
    double v2[3] = {-4.0 ,5.0 ,6.0};
    
    // Declare variables for scalar product and Euclidean norms
    double sproduct = 0.0;
    double enorm1 = 0.0;
    double enorm2 = 0.0;
    
    //Calculate scalar product of the vectors
    sproduct = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
    
    // Calculate Euclidean norms
    enorm1 = sqrt(pow(v1[0],2) + pow(v1[1],2) + pow(v1[2],2));
    enorm2 = sqrt(pow(v2[0],2) + pow(v2[1],2) + pow(v2[2],2));

    // Print the results to screen
    cout << "The scalar product of the two vectors is " << sproduct << endl;
    cout << "The Euclidean norm of the vector 1 is " << enorm1 << endl;
    cout << "The Euclidean norm of the vector 2 is " << enorm2 << endl;
    
    return 0;
}
