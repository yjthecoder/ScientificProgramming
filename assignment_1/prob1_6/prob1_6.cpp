/**********************************************************************/
/* Problem 1.6                                                        */
/* The program takes into 34, 58, 57, 32, 43 as number of car passing */
/* the house in consecutive 5 days into an array of integers and then */
/* calculate the average of these numbers.  Then it prints out the    */
/* average number of cars of these five days to the screen. Note that */
/* the resutl should be a double float number 44.8                    */
/**********************************************************************/

#include <iostream>

int main(int argc, char* argv[])
{
    // Initialize array for the data
    int array[5] = {34, 58, 57, 32, 43};
    
    // Use explicit cast to convert integer to double before doing division
    double average = ((double)(array[0] + array[1] + array[2] + array[3] + array[4])) / 5.0;
    
    // Print of the result
    std::cout << "Average number of cars is " << average << std::endl;

    return 0;
}
