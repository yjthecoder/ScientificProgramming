/**********************************************************************/
/* Problem 1.5                                                        */
/* This program invites the user to input separately strings          */
/* that store their given name and their family name. And then        */
/* print the user’s full name to screen.                              */
/**********************************************************************/

#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    // Initialize variables for user inputs
    std::string gname = "";
    std::string fname = "";
    

    // Get user's given name
    std::cout << "Enter your given name then press carrige return: " << std::endl;
    getline(std::cin, gname);
    
    // Get user's family name
    std::cout << "Enter your family name then press carrige return: " << std::endl;
    getline(std::cin, fname);
    
    // A blank line seperate inputs and output
    std::cout << std::endl;
    
    // Output user's full name
    std::cout << "You full name is " << gname << " " << fname << std::endl;
    
    // One more carriage returns at the end to make result more easy to view in the console
    std::cout << std::endl;
    
    return 0;
}
