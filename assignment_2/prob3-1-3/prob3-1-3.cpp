/*********************************************************/
/* Problem 3.2                                           */
/* This program uses the data file x_and_y.dat that was  */
/* written in the previous exercise. The code below      */
/* assumes that we know that the data file has 4 columns */
/* and that we want to count the number of row           */
/*********************************************************/

#include <iostream> 
#include <fstream>
using namespace std;
int main(int argc, char* argv[]) {
    
    ifstream read_file("x_and_y.dat");
    
    if (!read_file.is_open() {
        
        return 1;
    }
        
    int number_of_rows = 0;
        
    while(!read_file.eof()) {
        
        double dummy1, dummy2, dummy3, dummy4;
        read_file >> dummy1 >> dummy2;
        read_file >> dummy3 >> dummy4;
        number_of_rows++;
    }
        
    std::cout << "Number of rows = "
              << number_of_rows << "\n";
    read_file.close();
    return 0; }
}
