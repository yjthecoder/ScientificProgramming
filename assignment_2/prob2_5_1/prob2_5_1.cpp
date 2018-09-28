/***********************************************************/
/* Problem 2.5.1                                           */
/* The program defines a matrix A and calculate its inverse*/
/* and prints the result to screen, with each entry taking */
/* five characters' spaces and right justified              */
/***********************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Initialize matrix A
    double A[2][2] = {{4.0, 10.0},
                      {1.0, 1.0}};
    
    // Caldulate the determinant
    double detA = A[1][1] * A[0][0] - A[0][1] * A[1][0];
    
    double inverseA[2][2];
    
    // Calculate inverse of A using rules provided
    // in textbook A.1.3
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i != j) {
                
                // negate A[0][1] and A[1][0] and divided by det
                inverseA[i][j] = (-1) * A[i][j] / detA;
            } else {
                
                // swap A[1][1] and A[1][1]
                inverseA[i][j] = A[abs(i - 1)][abs(j - 1)] / detA;

            }
        }
    }
    
    // Print inserse of A to the screen
    cout << "Inverse of A : "<< endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (j / 1 == 0) {
                cout.width(5);
                cout << fixed << setprecision(3) << inverseA[i][j] << " ";
            } else {
                cout.width(5);
                cout << fixed << setprecision(3) << inverseA[i][j] << "\n";
            }
        }
    }
    cout << endl;
    
    return 0;
}
