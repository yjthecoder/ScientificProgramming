// Problem 5.6.2
// This problem is similar to 5.6.1 but it instead
// calculate the product of a matrix (left) and
// a vector (on the right).
// It uses the same function name "Multiply", but
// different arguments to demonstrate overloading.

#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, const char * argv[]) {
    
    void Multiply(int matrixRows, int matrixCols, double** Matrix,
                  int vectorRows, double* vector, double* resultVector );
    
    // Get vector length and Matrix size info
    // from command line args
    //    int vectorRows = atoi(argv[1]);
    //    int matrixRows = atoi(argv[2]);
    //    int matrixCols = atoi(argv[3]);
    
    //test
    int matrixRows = 2;
    int matrixCols = 4;
    
    // Note that for the vector appear on the right of multiplication
    // it must be a n*1 vector (column vector), thus only rows need
    // to be specified
    int vectorRows = 4;
    
    // Assert if the size info is valid
    // since the question differentiate between scalar, vector
    // and matrix, 2 is the minimal size
    bool validSize = vectorRows >= 2 && matrixRows >= 2 &&
                     matrixCols >= 2;
    
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
    
    // Dynamically allocate memory for the vecor
    // and initialize all its element to 1.0
    double* vector = new double [vectorRows];
    for (int i = 0; i < vectorRows; i++) {
        vector[i] = 1.0;
    }
    
    // Assert if the vector and the matrix
    // can be multiplied
    bool canMultiply = vectorRows == matrixCols;
    assert(canMultiply);
    
    // Dynamically allocate memory for the result vector
    double* resultVector = new double [matrixRows];
    
    // Do the multiplication
    Multiply(matrixRows, matrixCols, Matrix,
             vectorRows, vector, resultVector);
    
    
    // Print the calculation process to the screen
    
    // Print the matrix
    cout << "Matrix: " << endl;
    
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
    
    cout << endl;
    
    cout << "multiplying the vector: " << endl;
    
    // Print the vector (a column vector)
    for (int i = 0; i < vectorRows; i++) {
        cout.width(5);
        cout << vector[i] << endl;
    }

    // Print result vector to the screen
    // note result is a column vector
    cout << "gives the result vector: "<< endl;
    for (int i = 0; i < matrixRows; i++) {
        cout.width(5);
        cout << resultVector[i] << endl;
    }
    
    
    
    // Release the memory
    delete[] Matrix[0];
    delete[] Matrix;
    
    delete[] vector;
    delete[] resultVector;
    
    return 0;
}
