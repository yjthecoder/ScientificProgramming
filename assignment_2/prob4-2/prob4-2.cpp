/***********************************************************/
/* Problem 4.2                                             */
/* This program assigns values to two integer variables.   */
/* Swap the values stored by these variables using only    */
/* pointers to integers                                    */
/***********************************************************/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Initialize two integers and there pointers
    int a = 5;
    int b = 6;
    int *ptra = &a;
    int *ptrb = &b;
    
    // Do the swap using only two pointers
    *ptra = *ptra + *ptrb;
    *ptrb = *ptra - *ptrb;
    *ptra = *ptra - *ptrb;
    
    return 0;
}
