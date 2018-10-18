// The function multiplies a vector and a matrix
// By definition, multiply a vector (left)
// and a matrix (right), the vector
// should be treated like a row vector.
// And the result is also a row vector.

#include <cassert>

void Multiply(int vectorCols, double* vector, int matrixRows,
              int matrixCols, double** Matrix, double* resultVector ){
    
    // Initialize the number of products to be added
    // together to get one element in the resulting
    // vector
    int nbrOfProducts = vectorCols;
    
    for (int i=0; i < matrixCols; i++) {
        
        // Get rid of potential garbage value
        resultVector[i] = 0;
        
        // Calculate C[j]
        for (int k = 0; k < nbrOfProducts; k++) {
            resultVector[i] += vector[k] * Matrix[k][i];
        }
    }
}
