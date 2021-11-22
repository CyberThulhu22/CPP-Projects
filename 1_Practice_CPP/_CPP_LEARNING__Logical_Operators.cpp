// Logical Operators
// 
// NAME:        logicaloperators.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches Logical Operators
// TO-DO:       Build Initial Code Framework
// USAGE:       logicaloperators.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
    Learning how to use Logical Operations!

 ____________________________________________________
|   Operator    |   Name of Operator    |    Form    |
|----------------------------------------------------|
|       &&      |     AND Operator      |   y && y   |
|       ||      |     OR Operator       |   x || y   |
|       !       |     NOT Operator      |     !x     |
|_______________|_______________________|____________|

BELOW: The AND (&&) Operator works in the following way:
NOTE: In the AND operator, both operands must be true for the entire expression to be "True"
 _______________________________________________________
|   Left Operand    |   Right Operand    |    Result    |
|-------------------------------------------------------|
|       false       |       false        |     false    |
|       false       |       true         |     false    |
|       true        |       false        |     false    |
|       true        |       true         |     true     |
|___________________|____________________|______________|

BELOW: The OR (||) Operator works in the following way:
NOTE: You can combine any number of logical OR statements you want.
      In addition, multiple OR and AND statements may be chained together
 _______________________________________________________
|   Left Operand    |   Right Operand    |    Result    |
|-------------------------------------------------------|
|       false       |       false        |     false    |
|       false       |       true         |     true     |
|       true        |       false        |     true     |
|       true        |       true         |     true     |
|___________________|____________________|______________|

BELOW: The NOT (!) Operator works in the following way:
NOTE: Works with a single operand, reversing its logical state.
      Be careful using this, because !false means true!
 ______________________________
|    Operand    |    Result    |
|------------------------------|
|     false     |     true     |
|     true      |     false    |
|_______________|______________|


*/

int main() {

    // Example of Logical AND Statement
    int age = 23; // 'age' is set to 23
    int money = 4; // 'money' is set to 4
    if (age > 21 && money < 100) { // if 'age' is greater than 21 AND 'money' is less than 100...
        std::cout << "Welcome" << std::endl; // This String will be printed!
    }

    // Example of Logical OR Statement
    int teen = 16;
    int score = 90;
    if (teen > 20 || score > 50) { // if 'teen' is greater than 20 OR 'score' is greater than 50...
        std::cout << "Accepted" << std::endl; // This String will be printed!
    }

    // Example of Logical NOT Statement
    int new_age = 10;
    if ( !(new_age > 16) ) {
        std::cout << "Your age is less than 16" << std::endl;
    }

    return 0;
}