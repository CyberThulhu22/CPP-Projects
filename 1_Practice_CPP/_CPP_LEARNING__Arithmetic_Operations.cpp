// Arithmetic Operations Program
// 
// NAME:        arithmetic.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program that performs Arithmetic Operations
// TO-DO:       Build Initial Code Framework
// USAGE:       arithmetic.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
 How to Use Basic Arithmetic Operators!
  _________________________________________________________
 |        OPERATOR         |   SYMBOL  |       FORM        |
 |---------------------------------------------------------|
 |        Addition         |     +     |       x + y       |
 |       Subtraction       |     -     |       x - y       |
 |      Multiplication     |     *     |       x * y       |
 |        Division         |     /     |       x / y       |
 |        Modulus          |     %     |       x % y       |
 |        Increment        |     ++    |        x++        |
 |        Decrement        |     --    |        x--        |
 |_________________________|___________|___________________|
*/

int main() {

    int x, y; // Declare 'x' and 'y' as Integer Type
    x = 5; // 'x' equals 5
    y = 2; // 'y' equals 2

    int sum = x + y; // 'x' plus 'y'
    int sub = x - y; // 'x' minus 'y'
    int mul = x * y; // 'x' times 'y'
    int div = x / y; // 'x' divided by 'y'
    int mod = x % y; // 'x' modulus by 'y'



    // Output all the results!
    std::cout << "'x' equals: " << x << std::endl;
    std::cout << "'y' equals: " << y << std::endl;
    std::cout << "'x' plus 'y': " << sum << std::endl;
    std::cout << "'x' minus 'y': " << sub << std::endl;
    std::cout << "'x' times 'y': " << mul << std::endl;
    std::cout << "'x' divided by 'y': " << div << std::endl;
    std::cout << "'x' modulus by 'y': " << mod << std::endl;



    // You can also Increment/Decrement variables using '+=' or '-='
    sum += 10; // adding 10
    std::cout << "'sum' plus 10: " << sum << std::endl;

    sum -= 10; // Subtracting 5
    std::cout << "'sum' minus 10: " << sum << std::endl;



    // The same applies with '*=', '/=', '%='
    sum *= 10; // Multiplying by 10
    std::cout << "'sum' multiplied by 10: " << sum << std::endl;


    sum /= 5; // Dividing by 5
    std::cout << "'sum' divided by 5: " << sum << std::endl;


    sum %= 5; // Modulus by 5
    std::cout << "'sum' modulus by 5: " << sum << std::endl;



    // Another way to increment by 1 is 'var++'
    sum++; // Increasing by '1'
    std::cout << "'sum' incremented by '1': " << sum << std::endl;
    sum++; // Increasing by '1'
    std::cout << "'sum' incremented by '1': " << sum << std::endl;
    sum++; // Increasing by '1'
    std::cout << "'sum' incremented by '1': " << sum << std::endl;



    // Incrementations also have two forms: 'prefix' and 'postfix'
    sum = 5; // 'sum' is now 5
    int new_sum = ++sum; // Increments sum first then 'new_sum' equals the incremented 'sum'
    std::cout << "'sum' = "<< sum << "\nnew_sum = " << new_sum << std::endl;

    sum = 5; // 'sum' is now 5
    new_sum = sum++; // 'sum' stays the same, and 'new_sum' increments by '1'
    std::cout << "'sum' = "<< sum << "\nnew_sum = " << new_sum << std::endl;



    // You can also decrement by 1 using 'var--'
    sum--; // Decrementing by '1'
    std::cout << "'sum' decremented by '1': " << sum << std::endl;
    sum--; // Decrementing by '1'
    std::cout << "'sum' decremented by '1': " << sum << std::endl;
    sum--; // Decrementing by '1'
    std::cout << "'sum' decremented by '1': " << sum << std::endl;



    // Decrementaions also have two forms: 'prefix' and 'postfix'
    sum = 5; // 'sum' is now 5
    new_sum = --sum; // Decrements sum first then 'new_sum' equals the decremented 'sum'
    std::cout << "'sum' = "<< sum << "\nnew_sum = " << new_sum << std::endl;

    sum = 5; // 'sum' is now 5
    new_sum = sum--; // 'sum' stays the same, and 'new_sum' decrements by '1'
    std::cout << "'sum' = "<< sum << "\nnew_sum = " << new_sum << std::endl;    

    return 0;
}