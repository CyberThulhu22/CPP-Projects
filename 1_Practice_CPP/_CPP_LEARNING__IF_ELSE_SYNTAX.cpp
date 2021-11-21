// IF/ELSE Syntax
// 
// NAME:        ifelse.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program That Teaches If/Else
// TO-DO:       Build Initial Code Framework
// USAGE:       ifelse.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
  ____________________________________________________________________
 |    OPERATOR    |           DESCRIPTION             |   EXAMPLE     |
 |----------------------------------------------------|---------------|
 |       >        | Greater than...                   | 7 > 4 'True'  |
 |       <        | Less than...                      | 7 < 4 'False' |
 |       >=       | Greater than or equal to...       | 7 >= 4 'True' |
 |       <=       | Less than or equal to...          | 7 <= 4 'False'|
 |       ==       | Equal to...                       | 7 == 4 'False'|
 |       !=       | Not equal to...                   | 7 != 4 'True' |
 |________________|___________________________________|_______________|
*/

int main() {

    // An Example of an If Statement that is Successful
    if (7 > 4) { // Because 7 is Greater than 4...
        std::cout << "True" << std::endl; // 'True' should be printed
    }


    // An Example of an If Statement that is Failing
    if (7 < 4) { // Because 7 is NOT Greater than 4...
        std::cout << "True" << std::endl; // This Block of code will not execute.
    }


    // You can also you Relational Operators
    int a = 55;
    int b = 33;
    if (a > b) { // Because 'a' (Which is '55') is greater than 'b' (Which is '33')...
        std::cout << "'a' is greater than 'b'." << std::endl; // This Block of code will execute.
    }


    // An Example of an If/Else Statement!
    int score = 90;
    if (score < 70) { // Checks if Score is less than 70
        std::cout << "You Failed" << std::endl; // This will not Print
    }
    else {
        std::cout << "You Passed" << std::endl; // This will Print
    }


    // Example of Nested If/Else Statement:
    int time_of_day = 13;
    if (time_of_day < 12) {
        std::cout << "Good Morning!" << std::endl;
    }
    else { // We can nest another If/Else Statement inside the previous If/Else Statement
        if (time_of_day < 18) {
            std::cout << "Good Afternoon!" << std::endl;
        }
        else {
            std::cout << "Good Evening!" << std::endl;
        }
    }

    return 0;
}
