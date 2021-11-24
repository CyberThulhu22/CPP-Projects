// Discount Calculator!
// 
// NAME:        discountcalc.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program that Finds Discount Price
// TO-DO:       Build Initial Code Framework
// USAGE:       discountcalc.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>
#include <string>

using namespace std;

/* Fun finding Discount Prices */

int main() {
    string message; // Initialize message Variable
    
    message = "What is the Non-Discounted Price of the Item?";
    std::cout << message << std::endl;

    int itemPrice; // Initialize itemPrice Variable
    std::cin >> itemPrice; // Get Value for itemPrice Variable

    message = "What is the Discount Percentage (Number Only)?";
    std::cout << message << std:: endl;
    
    float discPercent; // Initialize discPercent Variable
    std::cin >> discPercent; // Get Value for discPercent Variable

    // Calculate the Percentage to Subtract
    float percentage =  (itemPrice * discPercent) / 100;

    // Calculate Discounted Price
    float discPrice = itemPrice - percentage;

    message = "Discounted Price: ";
    std::cout << message << discPrice << std::endl;

    return 0;
}