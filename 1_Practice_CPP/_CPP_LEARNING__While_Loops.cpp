// While Loops
// 
// NAME:        whileloop.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches While Loops
// TO-DO:       Build Initial Code Framework
// USAGE:       whileloop.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/* Learning how to use While Loops! */

int main() {

    // Example While Loop
    int count = 1;
    while (count <= 5) { // While the counter is not less than or equal to 5...
        std::cout << "Number: " << count << std::endl; // Print this statement
        count++; // Increment the count variable and continue the loop.
    }
    
    return 0;
}