/**********************************************************/
/* Problem 4.5                                            */
/* This program reads a two-column, space delimited .dat  */
/* file generated from 3.2 and convert it into a same     */
/* valued, comma delimited, two-column .dat file          */
/**********************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    
    // Open a .dat file
    ifstream read_file("xy-10.dat");
    
    if (!read_file.is_open()) {
        
        return 1;
    }
    
    int number_of_rows = 0;
    
    // 1st round read, get number of rows
    while(!read_file.eof()) {
        
        double dummy1, dummy2;
        read_file >> dummy1 >> dummy2;
        
        // Break the loop before increment number of rows
        // if read fails
        if (read_file.fail()) {
            break;
        }
        
        number_of_rows++;
    }
    
    cout << "Number of rows = "
    << number_of_rows << "\n";
    
    // Go to beginning of the file
    read_file.clear();
    read_file.seekg(::ios::beg);
    
    // Declar two dynamic arrays for x and y
    double  *x = new double [number_of_rows];
    double  *y = new double [number_of_rows];
    
    // 2nd round read, store values to arrays
    for (int i = 0; i < number_of_rows; i++) {
        read_file >> x[i] >> y[i];
    }
    
    
    ofstream write_file("out-xy.dat");
    assert(write_file.is_open());
    
    // Set precision
    write_file.precision(6);
    
    // Set scientific notation
    write_file.setf(ios::scientific);
    
    // Print out x and y, comman deliminated
    for (int i = 0; i < number_of_rows; i++) {

        write_file << *(x+i) << "," << *(y+i) << "\n";
        write_file.flush();
    }
    
    delete[] x;
    delete[] y;
    x = nullptr;
    y = nullptr;
    
    return 0;
}
