// The function multiplies a scalar and a matrix

void Multiply(double scalar, int matrixRows, int matrixCols, double** Matrix){
    
    // Simply multiply each element of the matrix
    // with the scalar and replace the element at the same position
    for (int i=0; i < matrixRows; i++) {
        for (int j = 0; j < matrixCols; j++) {
            Matrix[i][j] *= scalar;
        }
    }
}
