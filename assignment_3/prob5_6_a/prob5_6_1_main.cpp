// Problem 5.6.1
// This problem is similar to 5.5 but it instead
// calculate the product of a vector (left) and
// a matrix (right).
// It uses the same function name "Multiply", but
// different arguments to demonstrate overloading.

#include <iostream>
#include <cassert>
using namespace std;

int main(int argc, const char * argv[]) {
    
    void Multiply(int vectorCols, double* vector, int matrixRows,
                  int matrixCols, double** Matrix, double* resultVector );
    
    // Get vector length and Matrix size info
    // from command line args
    //    int vectorCols = atoi(argv[1]);
    //    int matrixRows = atoi(argv[2]);
    //    int matrixCols = atoi(argv[3]);
    
    //test
    // Note that for the vector appear on the left of multiplication
    // it must be a 1*n vector (row vector), thus only colums need
    // to be specified
    int vectorCols = 4;
    int matrixRows = 4;
    int matrixCols = 6;
    
    // Assert if the size info is valid
    // since the question differentiate between scalar, vector
    // and matrix, 2 is the minimal size
    bool validSize = vectorCols >= 2 && matrixRows >= 2 &&
                      matrixCols >= 2;
    
    assert(validSize);
    
    // Dynamically allocate memory for the vecor
    // and initialize all its element to 1.0
    double* vector = new double [vectorCols];
    for (int i = 0; i < vectorCols; i++) {
        vector[i] = 1.0;
    }
    
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
    
    // Assert if the vector and the matrix
    // can be multiplied
    bool canMultiply = vectorCols == matrixRows;
    assert(canMultiply);
    
    // Dynamically allocate memory for the result vector
    double* resultVector = new double [matrixCols];
    
    // Do the multiplication
    Multiply(vectorCols, vector, matrixRows,
             matrixCols, Matrix, resultVector);
    
    
    // Print the calculation process to the screen
    
    // Print the vector (a row vector)
    cout << "Vector: " << endl;
    for (int i = 0; i < vectorCols; i++) {
        cout.width(5);
        cout << vector[i];;
    }
    cout << endl;
    
    cout << "multiplying the matrix: " << endl;
    // Print the matrix
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
    
    // Print result vector to the screen
    // note result is a row vector
    cout << "gives the result vector: "<< endl;
    for (int i = 0; i < matrixCols; i++) {
        cout.width(5);
        cout << resultVector[i] << " ";
    }
    cout << endl;
    
    
    // Release the memory
    delete[] Matrix[0];
    delete[] Matrix;
    
    delete[] vector;
    delete[] resultVector;
    
    return 0;
}
