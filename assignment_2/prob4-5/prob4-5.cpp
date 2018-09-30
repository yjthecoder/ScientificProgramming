/*********************************************************/
/* Problem 4.5                                           */
/* This program uses the data file x_and_y.dat that was  */
/* written in the previous exercise. The code below      */
/* assumes that we know that the data file has 4 columns */
/* and that we want to count the number of row           */
/*********************************************************/

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    
    std::ifstream read_file("x_and_y.dat");
    
    if (!read_file.is_open()) {
        
        return 1;
    }
    
    int number_of_rows = 0;
    
    while(!read_file.eof()) {
        
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        
        // make sure
        if (read_file.fail()) {
            std::cout << "woops, read fails" << std::endl;
            break;
        }
        number_of_rows++;
    }
    
    std::cout << "Number of rows = "
    << number_of_rows << "\n";
    
    read_file.clear();
    read_file.seekg(std::ios::beg);
    
    
    return 0;
}
