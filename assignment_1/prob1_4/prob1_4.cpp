/*****************************************************************/
/* Problem 1.4                                                   */
/* The program declares four 2 × 2 matrices of double precision  */
/* floating point numbers,A,B,C,D, and assigns values to the     */
/* entries of A and B. Let C = A + B, and D=AB. The program then */
/* calculate the entries of C and D, and then prints the entries */
/* of these matrices to screen.                                  */
/*****************************************************************/

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // Declare four 2 × 2 matrices as required
    double A[2][2] = {{1.1 ,1.1}, {1.1 ,1.1}};
    double B[2][2] = {{2.2 ,2.2}, {2.2, 2.2}};
    double C[2][2];
    double D[2][2];

    
    // Calculate entries of C = A + B
    C[0][0] = A[0][0] + B[0][0];
    C[0][1] = A[0][1] + B[0][1];
    C[1][0] = A[1][0] + B[1][0];
    C[1][1] = A[1][1] + B[1][1];
    
    
    // Calculate entries of D = AB
    D[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    D[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    D[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    D[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    // Print C to the screen
    cout << "The entries of matrix C : "<< endl;
    cout << "[" << C[0][0] << "] " << "[" << C[0][1] << "]" << endl;
    cout << "[" << C[1][0] << "] " << "[" << C[1][1] << "]" << endl;

    // Print D to the screen
    cout << "The entries of matrix D : "<< endl;
    cout << "[" << D[0][0] << "] " << "[" << D[0][1] << "]" << endl;
    cout << "[" << D[1][0] << "] " << "[" << D[1][1] << "]" << endl;
    
    
    return 0;
}
