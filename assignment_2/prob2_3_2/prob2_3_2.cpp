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

        cout << "Current sum is: " << sum << "." << endl;
        if (sum > 100) {
            cout << "Already exceeded 100 !" << endl;
        }
        cout << endl;
    }
    
}
