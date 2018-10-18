// The function multiplies two matrices

#include "prob5_5.h"

void Multiply(int Arows, int Acols, int Brows,
              int Bcols, double** A, double** B, double** C){
    
    // Initialize the number of products to be added
    // together to get one element in the resulting
    // matrix C
    int nbrOfProducts = Acols;
    
    for (int i=0; i < Arows; i++) {
        for (int j = 0; j < Bcols; j++) {
            
            // Get rid of potential garbage value
            C[i][j] = 0;
            
            // Calculate C[i][j]
            for (int k = 0; k < nbrOfProducts; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
}
