
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
    int input = 0;
    
    while (true) {
        
        cout << "Please enters a positive integer to add\n"
        << "(enter -1 to terminate) :" << endl;
        cin >> input;
        
        if (input == -1) {
            cout << "\"-1\" is entered, program terminated ." << endl;
            break;
        }
        
        sum += input;
        cout << "Current sum is: " << sum << endl;
        cout << endl;
    }
 
}
