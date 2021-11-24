// Learning of Data Types
//  
// NAME:        datatypes.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Learning about Data Types
// TO-DO:       Build Initial Code Framework
// USAGE:       datatypes.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>
#include <string>

using namespace std;

/* Learning about different Data Types!  */

// Integers
/* Integer Modifiers
signed:         Can be bothed Negative and Positive Values
unsigned:       Can only hold Positive Values
short:          Half of the Default Size
long:           Twice the Default Size
*/
unsigned long int a; 

// Floating Point Numbers
/* 
Floating Point Types are always Signed
float:          4 bytes
double:         8 bytes
long double:    8-16 bytes
 */
long double b;

// Strings
/*
string:         
*/
string c = "Hello World!";

// Characters
/*
char:           Holds a 1-byte integer; enclosed in a single qoute.
*/
char d = 'A';

// Booleans
/*
bool:           Holds 1 of 2 possible value: true (1) and false (0)
*/
bool e = true;
bool f = false;

// Array
/*
An array is used to store a collection of data
int var[N]:     The [N] denotes how many values are within the array
int var[]:      An empty bracket will make the array just big enough to hold the initialized data
int var[3] = {1, 2, 3};
Arrays are indexed starting from 0
*/
int g[5];
int h[5] = {1, 2, 3, 4, 5};

int main() {

    return 0;
}