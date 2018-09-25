/*********************************************************/
/* Problem 2.3.2                                         */
/* On top of the features provided in 2.3.1 The program  */
/* check if the sum exceeds 100. And if so, the program  */
/* prints out a prompt informing the user and keep doing */
/* what is described in 2.3.1                            */
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
        << "(enter -1 to terminate) :" << endl;
        cin >> input;
        
        if (input == -1) {
            
            // Handle the end of input case
            cout << "\"-1\" is entered, program terminated ." << endl;
            break;
        } else if (input <= -2) {
            
            //make sure only positive integer or 0 are added to sum
            cout << input << " is invalid, only positive integer allowed!." << endl;
            continue;
        } else {
            
            // Increment the sum by the amount of user input
            sum += input;
        }
        
        // Print out the result
        cout << "Current sum is: " << sum << "." << endl;
        
        // Handle the case when sum exceeds 100
        if (sum > 100) {
            cout << "Already exceeded 100 !" << endl;
        }
        cout << endl;
    }
    
}
