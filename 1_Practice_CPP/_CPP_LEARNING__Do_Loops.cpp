// Do Loops
// 
// NAME:        doloop.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches Do Loops
// TO-DO:       Build Initial Code Framework
// USAGE:       doloop.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
    Learning how to use do Loops! 

    do {
        statement(s);
    } while (condition);

    Unlike for and while loops, which test the loop condition at the top of the loop, the do...while loop checks its condition at the bottom of the loop.
    A do...while loop is similar to a while loop. The one difference is that the do...while loop is guaranteed to execute at least one time
*/

int main() {

    int x = 1; // Declares/Assigns 'x' the Value of 1
    
    do {
        std::cout << "Number: " << x << std::endl;
    } while (x != 1); // Even though 'x' will equal 1, this code will run at least once!

    return 0;
}