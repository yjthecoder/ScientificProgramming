#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main(int argc, char* argv[]) {
    
    // Open file
    ifstream read_file("xy.dat");
    assert (!read_file.is_open());
    
    //get number of rows
    int number_of_rows = 0;
    while(!read_file.eof())
    {
        
        double dummy1, dummy2;
        read_file >> dummy1 >> dummy2;
        
        if (read_file.fail()) {
            break;
        }
        
        number_of_rows++;
    }
    
    cout << "Number of rows = "<< number_of_rows << "\n";
    
    // Go to beginning of the file
    read_file.clear();
    read_file.seekg(std::ios::beg);
    
    // Declar two dynamic arrays for x and y
    double  *x = new double [number_of_rows];
    double  *y = new double [number_of_rows];
    
    // 2nd round read, store values to arrays
    for (int i = 0; i < number_of_rows; i++) {
        read_file >> x[i] >> y[i];
    }
    
    
    ofstream write_file("out-xy.dat");
    assert(write_file.is_open());

    
    // Print out x and y use , separate
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
