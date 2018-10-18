// Problem 5.5
// The main function acts as the driver
// It take 4 arguments as the size of the data,
// A's row, column, B's row, colum respectively.
// It then dynamically allocates arrays for them,
// and initailize their elements with value 1.0.
// It then check whether they can be multiplied together,
// if yes, dynamically allocates memory for the resulting
// matrix C, calls the multiply function to do the job.
// Finally it prints the whole calculation process, the initial
// two matrix and the .

#include "prob5_5.h"

int main(int argc, const char * argv[]) {
    
    
    // Get matrix A and B size info
    // from command line args
//    int Arows = atoi(argv[1]);
//    int Acols = atoi(argv[2]);
//    int Brows = atoi(argv[3]);
//    int Bcols = atoi(argv[4]);
    
    //test
        int Arows = 3;
        int Acols = 4;
        int Brows = 4;
        int Bcols = 5;
    
    // Make sure the user input matrix size info is valid
    // any "matrix" with colum or row being 1 will be treated
    // as a vector and thus be handled by prob5_6 using overloading
    bool validSize = Arows >= 2 && Acols >= 2 &&
                     Brows >= 2 && Bcols >= 2;
    
    assert(validSize);
    
    // Dynamically allocate memory for matrix A
    
    double** A;
    A = new double* [Arows];
    A[0] = new double [Arows * Acols];
    for (int i=1; i<Arows; i++)
    {
        A[i] = A[i-1] + Acols;
    }
    
    // initailize A's all element to be 1.0
    for (int i = 0; i < Arows; i++) {
        for (int j = 0; j < Acols; j++) {
            A[i][j] = 1.0;
        }
    }
    
    // Dynamically allocate memory for matrix B
    double** B;
    B = new double* [Brows];
    B[0] = new double [Brows * Bcols];
    for (int i=1; i<Brows; i++)
    {
        B[i] = B[i-1] + Bcols;
    }
    
    // initailize B's all element to be 1.0
    for (int i = 0; i < Brows; i++) {
        for (int j = 0; j < Bcols; j++) {
            B[i][j] = 1.0;
        }
    }
    
    // Assert whether A and B can be multiplied
    // before allocating any resource for the product
    // matrix and calling Multiply function, so as to
    // improve performance
    
    // Note that although the quesiont seems to
    // want assertion located in Multiply function,
    // I think it makes more sense to make sure they
    // can be multiplied before invoking
    
    // Only when Acols = Brows can
    // the two matrices be mutiplied together
    bool canMultiply = Acols == Brows;
    
    assert(canMultiply);
    
    
    // Dynamically allocate memory for matrix C
    // assuming A and B is multip
    double** C;
    int Crows = Arows;
    int Ccols = Bcols;
    C = new double* [Crows];
    C[0] = new double [Crows * Ccols];
    for (int i=1; i<Crows; i++)
    {
        C[i] = C[i-1] + Ccols;
    }
    
    // Do the multiplication
    Multiply(Arows, Acols, Brows,
                  Bcols, A, B, C);
    
    
    // Print the calculation process to the screen
    
    // Print the matrix A (on the left)
    cout << "Matrix A : " << endl;
    for (int i = 0; i < Arows; i++) {
        for (int j = 0; j < Acols; j++) {
            if (j / (Acols - 1) == 0) {
                cout.width(5);
                cout << A[i][j] << " ";
            } else {
                cout.width(5);
                cout << A[i][j] << "\n";
            }
        }
    }
    
    cout << "multiplying the matrix B: " << endl;
    
    // Print the matrix B (on the right)
    for (int i = 0; i < Brows; i++) {
        for (int j = 0; j < Bcols; j++) {
            if (j / (Bcols - 1) == 0) {
                cout.width(5);
                cout << B[i][j] << " ";
            } else {
                cout.width(5);
                cout << B[i][j] << "\n";
            }
        }
    }
    
    // Print result matrix C to the screen
    cout << "gives the result Matrix C: "<< endl;
    for (int i = 0; i < Crows; i++) {
        for (int j = 0; j < Ccols; j++) {
            if (j / (Ccols - 1) == 0) {
                cout.width(5);
                cout << C[i][j] << " ";
            } else {
                cout.width(5);
                cout << C[i][j] << "\n";
            }
        }
    }
    
    

    // Release the memory
    
    delete[] B[0];
    delete[] B;
    
    delete[] A[0];
    delete[] A;
 
    delete[] C[0];
    delete[] C;
    
    
    return 0;
}
