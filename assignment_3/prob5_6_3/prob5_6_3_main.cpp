// Problem 5.6.3
// The main function acts as the driver
// It take 3 command line arguments in the
// following order:
// a scalar, matrix row and matrix column.
// It then dynamically allocates an array for the matrix,
// and initailize their elements with value 1.0.
// It then multiply the matrix with the scalar, by calling
// the overloaded "Multiply" function.
//
// Note two things:
// 1. The matrix's dimension does not change, so new memory
//    needed for the result matrix, overwrite the old one.
// 2. 

#include <iostream>
#include <cassert>
using namespace std;
int main(int argc, const char * argv[]) {

    void Multiply(double scalar, int matrixRows, int matrixCols, double** Matrix);
    // Get vector length and Matrix size info
    // and the scalar from command line args
    
    //    double scalar = atof(argv[1]);
    //    int matrixRows = atoi(argv[2]);
    //    int matrixCols = atoi(argv[3]);

    
    //test
    double scalar = 2.2;
    int matrixRows = 2;
    int matrixCols = 4;
    
    
    // Assert if the size info is valid
    // since the question differentiate between scalar, vector
    // and matrix, 2 is the minimal size
    bool validSize = matrixRows >= 2 && matrixCols >= 2;
    assert(validSize);
    
    // Dynamically allocate memory for the matrix
    double** Matrix;
    Matrix = new double* [matrixRows];
    Matrix[0] = new double [matrixRows * matrixCols];
    for (int i=1; i<matrixRows; i++)
    {
        Matrix[i] = Matrix[i-1] + matrixCols;
    }
    
    // initailize matrix's all element to be 1.0
    for (int i = 0; i < matrixRows; i++) {
        for (int j = 0; j < matrixCols; j++) {
            Matrix[i][j] = 1.0;
        }
    }
    
    // Print the calculation process to the screen
    
    // Print the scalar
    cout << "Scalar: " << scalar << endl;
    
    cout << "multiplying matrix: " << endl;
    
    // Print the original matrix
    for (int i = 0; i < matrixRows; i++) {
        for (int j = 0; j < matrixCols; j++) {
            if (j / (matrixCols - 1) == 0) {
                cout.width(5);
                cout << Matrix[i][j] << " ";
            } else {
                cout.width(5);
                cout << Matrix[i][j] << "\n";
            }
        }
    }
    
    // Do the multiplication
    
    // There is no restriction on the dimension of a matrix to
    // be multiplied with a scalar, no assertion needed,
    // multiply directly
    
    Multiply(scalar, matrixRows, matrixCols, Matrix);
    
    cout << "gives the result matrix:" << endl;
    
    // Print the multiplied matrix
    for (int i = 0; i < matrixRows; i++) {
        for (int j = 0; j < matrixCols; j++) {
            if (j / (matrixCols - 1) == 0) {
                cout.width(5);
                cout << Matrix[i][j] << " ";
            } else {
                cout.width(5);
                cout << Matrix[i][j] << "\n";
            }
        }
    }
    
    return 0;
}
