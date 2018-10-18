//
//  main.cpp
//  assignment_3
//
//  Created by YUAN JI on 2018-10-16.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <iostream>
using namespace std;


void p5_4_test(double* x = nullptr){
    if(x) {
        *x = 11.1;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double x = 9.9;
    
    
    cout << x << endl;
    
    p5_4_test(&x);
    
    cout << x << endl;
    
    return 0;
}
