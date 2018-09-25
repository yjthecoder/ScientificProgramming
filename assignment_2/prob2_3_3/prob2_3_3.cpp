/*********************************************************/
/* Problem 2.3.3                                         */
/* On top of the features provided in 2.3.2 The program  */
/* allows user to enter "-2" to reset sum back to 0, and */
/* then prints out a prompt informing the user and keep  */
/* doing what is described in 2.3.2                      */
/*********************************************************/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    // Declare a variable to hold user input outside the loop
    // so do no have to be created every time the loop runs
    int input = 0;
    
    while (true) {
        
        // Prompt the user to input
        cout << "Please enters a positive integer to add\n"
        << "(enter \"-1\" to terminate, \"-2\" to set sum to 0) :" << endl;
        cin >> input;
        
        if (input == -1) {
            
            // Handle the end of input case
            cout << "\"-1\" is entered, program terminated." << endl;
            break;
        } else if (input == -2) {
            
            // Handle the reset input case
            cout << "\"-2\" is entered, sum reset to 0" << endl << endl;
            sum = 0;
            continue;
        } else if (input < -2) {
            
            //make sure only positive integer or 0 are added to sum
            cout << input << " is invalid, "
            <<"only \"-1\", \"-2\" and positive integers allowed!." << endl;
            continue;
        } else {
            
            // Increment the sum by the amount of user input
            sum += input;
        }
        
        // Print out the result
        cout << "Current sum is: " << sum << endl;
        
        // Handle the case when sum exceeds 100
        if (sum > 100) {
            cout << "Already exceeded 100 !" << endl;
        }
        cout << endl;
    }
    
}
