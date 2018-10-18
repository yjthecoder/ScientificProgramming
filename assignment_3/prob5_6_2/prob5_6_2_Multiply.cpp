// The function multiplies a matrix and a vector
// By definition, multiply a matrix (left)
// and a vector (right), the vector
// should be treated like a column vector.
// And the result is also a column vector.

#include <cassert>

void Multiply(int matrixRows, int matrixCols, double** Matrix,
              int vectorRows, double* vector, double* resultVector ){
    
    // Initialize the number of products to be added
    // together to get one element in the resulting
    // vector
    int nbrOfProducts = vectorRows;
    
    for (int i=0; i < matrixRows; i++) {
        
        // Get rid of potential garbage value
        resultVector[i] = 0;
        
        // Calculate C[j]
        for (int k = 0; k < nbrOfProducts; k++) {
            resultVector[i] += vector[k] * Matrix[i][k];
        }
    }
}
