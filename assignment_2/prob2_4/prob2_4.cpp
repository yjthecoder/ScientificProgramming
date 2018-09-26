/***********************************************************/
/* Problem 2.4                                             */
/* The program defines two vectors u, v and two matrices   */
/* A and B, use them to calculate other 3 vectors:         */
/* x = u − v                                               */
/* y = Au                                                  */
/* z = Au -v                                               */
/* and two other matrices:                                 */
/* C = 4A - 3B                                             */
/* D = AB                                                  */
/* and prints the result to screen, with each entry taking */
/* five characters' spaces and right justfied              */
/***********************************************************/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Initialize the given data
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};
    
    // Decalre the vectors and matrices needs to be calculated
    // initilized them with 0s
    
    double x[3] = {0.0, 0.0, 0.0};
    double y[3] = {0.0, 0.0, 0.0};
    double z[3] = {0.0, 0.0, 0.0};
    
    double C[3][3] = {{0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0}};
    
    double D[3][3] = {{0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0},
                      {0.0, 0.0, 0.0}};
    
    // Calculate vector x = u − v
    for (int i=0; i<3; i++) {
        x[i] = u[i] - v[i];
    }
    
    
    // Print x to the screen
    cout << "Vector x=u-v :"<< endl;
    
    for (int i = 0; i < 3; i++) {
        if (i / 2 == 0) {
            
            // set the fixed length of output
            cout.width(5);
            
            // seperate each entry with space
            // if the entry is not at end of line
            cout << x[i] << " ";
        } else {
            
            // start a new line after each row
            cout.width(5);
            cout << x[i] << "\n";
        }
        
    }
    cout << endl;
    
    // Calculate vector y = Au
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            y[i] += A[i][j] * u[j];
        }
    }
    
    // Print y to the screen
    cout << "Vector y=Au :"<< endl;
    for (int i = 0; i < 3; i++) {
        if (i != 2) {
            cout.width(5);
            cout << y[i] << " ";
        } else {
            cout.width(5);
            cout << y[i] << "\n";
        }
    }
    
    // print a blank line to seperate each result
    cout << endl;
    
    
    // Calculate vector z = Au - v
    for (int i=0; i < 3; i++) {
        z[i] = y[i] - v[i];
    }
    
    // Print z to the screen
    cout << "Vector z=Au-v :"<< endl;
    for (int i = 0; i < 3; i++) {
        if (i != 2) {
            cout.width(5);
            cout << z[i] << " ";
        } else {
            cout.width(5);
            cout << z[i] << "\n";
        }
    }
    cout << endl;

    
    // Calculate matrix C = 4A - 3B
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 4 * A[i][j]  - 3 * B[i][j];
        }
    }
    
    // Print C to the screen
    cout << "Matrix C=4A - 3B: "<< endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j / 2 == 0) {
                cout.width(5);
                cout << C[i][j] << " ";
            } else {
                cout.width(5);
                cout << C[i][j] << "\n";
            }
        }
    }
    cout << endl;

    
    
    // Calculate matrix D = AB
    for (int i=0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Print D to the screen
    cout << "Matrix D=AB: "<< endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j / 2 == 0) {
                cout.width(5);
                cout << D[i][j] << " ";
            } else {
                cout.width(5);
                cout << D[i][j] << "\n";
            }
        }
    }
    cout << endl;
    
    return 0;
}
