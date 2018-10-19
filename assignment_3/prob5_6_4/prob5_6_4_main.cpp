// Problem 5.6.4
// The is very similar to 5.6.3
// There are only two difference worth
// to be noted.
// 1. The main function takes command line
//    arguments in the order: matrix row,
//    matrix colum, and a scalar.
// 2. The overloaded multiply function takes
//    arguments in the order: scalar, matrix row,
//    matrix column, and the pointer to the Matrix

#include <iostream>
#include <cassert>
using namespace std;
int main(int argc, const char * argv[]) {
    
    // Function prototype
    void Multiply(int matrixRows, int matrixCols, double scalar, double** Matrix);
    
    // Get vector length and Matrix size info
    // and the scalar from command line args
    
    
    //    int matrixRows = atoi(argv[1]);
    //    int matrixCols = atoi(argv[2]);
    //    double scalar = atof(argv[3]);
    
    
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
    cout << "Matrix: " << endl;
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
    
    cout << "multiplying scalar: " << scalar << endl;

    // Do the multiplication
    
    // There is no restriction on the dimension of a matrix to
    // be multiplied with a scalar, no assertion needed,
    // multiply directly
    
    Multiply(matrixRows, matrixCols, scalar, Matrix);
    
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
