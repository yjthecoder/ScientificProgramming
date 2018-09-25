/**********************************************************************/
/* Problem 1.7                                                        */
/* The program is intended to investigate the GNU GCC compiler error  */
/* warning flags against the follwing error/warnings:                 */
/*                                                                    */
/* 1. Atempt to modify a constant                                     */
/* 2. Implicit cast                                                   */
/* 3. Initialize a variable but never use it                          */
/**********************************************************************/



#include <iostream>

int main(int argc, const char * argv[]) {
    
    
    // 1. Atempt to modify a constant
    const int testConst = 100;
    testConst = 1;
    
    // 2. Implicit cast
    int testInt = 3.2;
    std::cout << testInt << std::endl;
    
    // 3. Initialize a variable but never use it
    int neverUsedInt = 2;



    return 0;
}
