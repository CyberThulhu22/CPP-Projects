// For Loops
// 
// NAME:        forloop.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches For Loops
// TO-DO:       Build Initial Code Framework
// USAGE:       forloop.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
    Learning how to use For Loops! 

    for ( init; condition; increment ) {
        statement(s);
    }
*/

int main() {

    // Example of a For Loop
    for (int x = 1; x <= 10; x++) { // This will declare 'x' as 1 and while it doesn't equal 10 it will run the code block and increment after each iteration
        std::cout << "Hello. Number: " << x << std::endl; // Statement to be printed
    } // After 'x' equals 11 the for loop will equal "False" and end the loop (Doesn't run the code block with 11)
    
    return 0;
}