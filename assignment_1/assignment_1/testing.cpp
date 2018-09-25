//
//  main.cpp
//  assignment_1
//
//  Created by YUAN JI on 2018-09-15.
//  Copyright © 2018 YUAN JI. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string a = "";
    std::string b = "";

    getline(std::cin, a);
    getline(std::cin, b);

    int inta;
    int intb;

    
    try {
        inta = std::stoi(a);
        intb = std::stoi(b);
    } catch (std::invalid_argument&) {
        std::cout << "At least on input is not an integer, try again" << std::endl;
        return 0;
    }
    
    if (std::to_string(inta) != a || std::to_string(intb) != b) {
        std::cout << "At least on input is not an integer, try again" << std::endl;
        return 0;
    }
    

    std::cout << "Hello, int " << a << " , " << b << std::endl;
    return 0;
    
}
