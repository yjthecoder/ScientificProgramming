/**********************************************************************/
/* Problem 1.2                                                        */
/* This program aims at computing the product of two integers         */
/* from user input through command line and pirnt out the result in   */
/* the console. The program prompts the user to input two integers    */
/* seperated by carriage return. It then check if the input are in    */
/* fact integers, if any of the input is not an integer, the program  */
/* prompt the user to try again. If input are both valid integers the */
/* program then compute the product of them and print it out to the   */
/* console.                                                           */
/**********************************************************************/

#include <iostream>
#include <cassert>
#include <cmath>
#include <string>

int main(int argc, char* argv[])
{
    // User could input anything, first treat them as strings
    std::string a = "";
    std::string b = "";
    
    // Two integers variable to store the converted result later
    int inta;
    int intb;
    
    // Get the inputs from the user
    std::cout << "Enter two integers seperated by carrige return: " << std::endl;
    getline(std::cin, a);
    getline(std::cin, b);
    

    // Convert the inputs to integers and check if the conversion works
    try {
        inta = std::stoi(a);
        intb = std::stoi(b);
    } catch (std::invalid_argument&) {
        
        //if conversion throws exception, then the input is bad
        std::cout << "At least one input is not an integer, run again" << std::endl;
        return 0;
    }
    
    // Check if the converted result is exactly the same as its original string representation
    if (std::to_string(inta) != a || std::to_string(intb) != b) {
        std::cout << "At least one input is not an integer, run again" << std::endl;
        return 0;
    }
    
    // Output the product of 'a' and 'b' with labeling message
    std::cout << "The product of " << a << " and " << b << " is " << inta * intb << std::endl;

    return 0;
}
