/***********************************************************/
/* Problem 1.2 */
/* This program computes the product of two input 'a' and 'b'. */
/* The two input are obtained from the user by asking for */
/* them to be entered on the command line. The input are */
/* then checked to ensure they are both integer and, if so, the */
/* product of them is printed to the screen. */
/***********************************************************/

#include <iostream>
#include <cassert>
#include <cmath>
#include <string>

int main(int argc, char* argv[])
{
    // user could input anything, we first treat them as strings
    std::string a = "";
    std::string b = "";
    int c;
    
    // Get the first input from the user
    std::cout << "Enter an integer: " << std::endl;
    getline(std::cin, a);
    
    std::cout << stoi(a) << std::endl;
    // Check if the user input an integer for a
    // (By gauge whether its converted integer value if equivalent to the original string)
    assert(std::to_string(stoi(a)) == a);

    
    std::cout << "Enter another integer: " << std::endl;
    getline(std::cin, b);
    
    // Check if the user input an integer for b
    assert(std::to_string(stoi(b)) == b);
    
    // By now we are sure we get two integers so we calculate the product of them
    c = stoi(a) * stoi(b);
    
    // Output the product of 'a' and 'b' with labeling message
    std::cout << "The product of " << a << " and " << b << " is " << c << std::endl;

    return 0;
}
