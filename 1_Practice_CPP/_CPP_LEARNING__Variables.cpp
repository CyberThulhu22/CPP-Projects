// Hello World Program
// 
// NAME:        variables.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program that uses Variables
// TO-DO:       Build Initial Code Framework
// USAGE:       variables.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

// <summary>
// Learning about assigning Values to Variables
// </summary>

int main() {
    // An initial Variable
    int myVariable = 10;
    std::cout << myVariable << std::endl;

    // Doing simple math with Variables
    // int a, b; < This is how you can declare the Type, but you cannot declare it again when assigning a value. So this line is commented out.
    int a = 30; // Assign Variable 'a' 30.
    int b = 14; // Assign Variable 'b' 15.
    int sum = a + b; // Sum up the variables.
    std::cout << sum << std::endl; // Output the Sum.

    // You can declare a variable and assign a value later too, or assign it then and there
    int c; // Declares 'c' a variable.
    int d = 42; // Declares and Assigns 42 to the Variable 'd'.
    c = 10; // Assigning 'c' a Value
    d = 3; // Changing the Value of 'd' 
    int difference = c - d; // Subtract the Values
    std::cout << difference << std::endl;

    // You can also get user input using 'cin'
    int e, f, g;
    std::cout << "Enter a number. \n";
    std::cin >> e; // User input for one Variable
    std::cout << "Enter another 2 numbers. \n";
    std::cin >> f >> g; // You can also get input for multiple Variables
    sum = e + f + g;
    std::cout << "The sum of the numbers is: " << sum << std::endl;

    // There is also an 'auto' keyword to auto assign variable type
    // However you can not do this... It results in an Error
    // auto num;
    // num = 10;
    // You have to assign a value to the variable when using 'auto'
    auto num = 100;
    std::cout << num << std::endl;

    return 0;
}