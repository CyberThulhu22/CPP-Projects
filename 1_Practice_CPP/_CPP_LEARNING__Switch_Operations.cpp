// Switch Operations
// 
// NAME:        switchoperation.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches Switch Operations
// TO-DO:       Build Initial Code Framework
// USAGE:       switchoperation.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
    Learning how to use Switch Operations!

    Useful when you have multiple "If Statements" and need to test a variable against multiple conditions

    switch (expression) {
        case value1:
            statement(s);
            break;
        case value2:
            statement(s);
            break;
        case valueN:
            statement(s);
            break;
    }
*/

int main() {

    // Example of Case and Switch Statement(s)
    int age = 42; // Initial 'age' is set to 42

    switch (age) {
        case 16: // If 'age' is equal to 16
            std::cout << "Too Young" << std::endl;
            break;
        case 42: // If 'age' is equal to 42
            std::cout << "Adult" << std::endl;
            break;
        case 70: // If 'age' is equal to 70
            std::cout << "Senior" << std::endl;
            break;
        default: // Default case can be used to perform a task when none of the cases are "True"
            std::cout << "This is the default case" << std::endl;
            break;
    }

    return 0;
}