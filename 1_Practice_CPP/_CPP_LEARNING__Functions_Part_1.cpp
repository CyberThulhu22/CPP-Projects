// Functions
// 
// NAME:        functions.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches Functions
// TO-DO:       Build Initial Code Framework
// USAGE:       functions.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>


using namespace std;

/* Learning how to use Functions!

BASIC FUNCTION STRUCTURE
A functions return type is declared before its name. " -> 'int' <- main() { return 0; }"
In Main, It indicates the function will return an integer value.

Occasionally, a function will perform a desired operation without returning a value.
These functions are defined with a keyword 'void'.

function structure
return_type function_name( parameter_list ) {
    body of the function
}

Note: Parameters are Optional. You dont have to have any.
------------------------------------------------------------------------------------

DECLARING FUNCTIONS
You MUST declare a function prior to calling it.
You CAN declare it before, and then Define what the function does later in the code.
------------------------------------------------------------------------------------

MULTIPLE PARAMETERS and  DEFAULTS
For parameters, you have to declare the type then the variable name.
Mulitple parameters are denominated by a ',' (comma)

void some_func(string text, int x) {
    cout << text << x << endl;
    }

You can have as many Parameters as you want. You can also assign default values for each of the last parameters
int add_num(int a=1, int b=2, int c=3, int d=4, int e=5){
    return a + b + c + d + e; // Returns 15
}
------------------------------------------------------------------------------------

RANDOM NUMBERS:
You can do a random number by including the '<cstdlib>' and calling the rand() function
You can use srand() to generate truly random numbers.. Requires a seed (Integer) as a argument
int main() {
    srand(98);
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}

Best way to generate a seed is including the '<ctime>' library and using time(0) as a function.
NOTE: time(0) will get the number of seconds on your system time
------------------------------------------------------------------------------------
 */

// Function Declare and Definition, Also has Parameters
void printText( string text="Hello World" ) {
    std::cout << text << std::endl;
}

// Function Declaration
void anotherPrint();

int main() {
    srand(time(0));

    printText("This is some Text");
    printText("This is more Text");
    anotherPrint();

    std::cout << rand() << std::endl;

    return 0;
}

// Function Definition After Main
void anotherPrint() {
    std::cout << "This was Declared before, and Defined After.." << std::endl;
}