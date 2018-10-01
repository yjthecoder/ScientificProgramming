/**********************************************************/
/* Problem 4.5                                            */
/* This program follows the detailed instruction provided */
/* in the hand-written description on previous page.      */
/* Crutial steps are also emphasised by inline comments   */
/**********************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    
    
    int number_of_rows = 0;
    
    // 1st read, get number of rows
    ifstream read_file("x_and_y.dat");
    
    if (!read_file.is_open()) {
        
        return 1;
    }
    
    while(!read_file.eof()) {
        
        double dummy1, dummy2;
        read_file >> dummy1 >> dummy2;
        
        // make sure
        if (read_file.fail()) {
            ::cout << "woops, read fails" << ::endl;
            break;
        }
        number_of_rows++;
    }
    
    ::cout << "Number of rows = "
    << number_of_rows << "\n";
    
    read_file.clear();
    read_file.seekg(::ios::beg);
    
    
    return 0;
}
