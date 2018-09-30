/***********************************************************/
/* Problem 4.1                                             */
/* This program declares an integer i to take the value 5. */
/* Declare a pointer to an integer p_j, and store the      */
/* address of i in this pointer. Multiply the value of the */
/* variable i by 5 by using a line of code that only uses  */
/* the pointer variable. Declare another pointer to an     */
/* integer p_k and use the new keyword to allocate a       */
/* location in memory that this pointer stores. Then store */
/* the contents of the variable i in this location.        */
/***********************************************************/

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // Initialize integer i
    int i = 5;
    
    // Initialize the pointer to i, p_j
    int *p_j = &i;
    
    // Multiply the value of i by 5
    *p_j *= 5;
    
    // Declare another pinter to an integer
    int *p_k = new int;
    
    // Store contents of i
    *p_k = i;
    
    return 0;
}
