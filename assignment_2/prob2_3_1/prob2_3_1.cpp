
/*********************************************************/
/* Problem 2.3.1                                         */
/* The program prompts the user to enter positive        */
/* integers, each followed by the return key. It prints  */
/* out the current sum of the inputs as integers being   */
/* entered. The program terminates as user enter "-1".   */
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
        
        // Handle the end of input case
        if (input == -1) {
            cout << "\"-1\" is entered, program terminated ." << endl;
            break;
        }
        
        // Increment the sum by the amount of user input
        sum += input;
        
        // Print out the result
        cout << "Current sum is: " << sum << endl;
        cout << endl;
    }
 
}
