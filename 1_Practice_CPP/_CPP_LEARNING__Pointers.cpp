// Learning of Pointers 
//  
// NAME:        pointers.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Learning about Data Types
// TO-DO:       Build Initial Code Framework
// USAGE:       pointers.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>
#include <string>

using namespace std;

/* Learning about Pointers! 

Every variable is a memory location, which has its address defined.
That address can be accessed using the ampersand (&) operator (also called the address-of operator), which denotes an address in memory.

A pointer is a variable, and like any other variable, it must be declared before you can work with it.
The asterisk sign is used to declare a pointer (the same asterisk that you use for multiplication),
however, in this statement the asterisk is being used to designate a variable as a pointer.
int *ip;    ->  Pointer to an integer
double *dp; ->  Pointer to a double
float *fp;  ->  Pointer to a float
char *ch;   ->  Pointer to a character

There are two operators for pointers:
Address-of operator (&): returns the memory address of its operand.
Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.

To be successful as a C++ programmer, it's essential to have a good understanding of how dynamic memory works.
In a C++ program, memory is divided into two parts:
The stack: All of your local variables take up memory from the stack.
The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.

Many times, you are not aware in advance how much memory you will need to store particular information in a defined variable and the size of required memory can be determined at run time.
You can allocate memory at run time within the heap for the variable of a given type using the new operator, which returns the address of the space allocated.

new int;        ->  Allocates memory size necessary for storing an integer on the heap, and returns that address

For local variables on the stack, managing memory is carried out automatically.
On the heap, it's necessary to manually handle the dynamically allocated memory, and use the delete operator to free up the memory when it's no longer needed.
Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks, because that memory will stay allocated until the program shuts down.

delete pointer;

The delete operator frees up the memory allocated for the variable, but does not delete the pointer itself, as the pointer is stored on the stack.
Pointers that are left pointing to non-existent memory locations are called dangling pointers.

Dynamic memory is good for Inputs or Reading Images that you dont know the size needed for it yet.


**sizeof operator**
While the size allocated for varying data types depends on the architecture of the computer you use to run your programs
C++ does guarantee a minimum size for the basic data types:
 _____________________________________________
| Category       | Type        | Minimum Size |
|---------------------------------------------|
| boolean        | bool        | 1 byte       |
| character      | char        | 1 byte       |
| integer        | short       | 2 bytes      | 
|                | int         | 2 bytes      |
|                | long        | 4 bytes      |
|                | long long   | 8 bytes      |
| floating point | float       | 4 bytes      |
|                | double      | 8 bytes      |
|                | long double | 8 bytes      |
|________________|_____________|______________|

sizeof (data type)
*/

int main() {

    int score = 5; // Declares the variable score as an 'int' and assigns the value of '5'
    int *scorePtr; // Declares the variable as a Pointer 
    scorePtr = &score; // Assigns the memory address of 'score' as the value to the pointer

    string message = "The memory address is: ";
    string another_msg = "The contents of this address are: ";
    
    std::cout << message << &score << std::endl;
    std::cout << another_msg << *scorePtr << std::endl;

    int *pointer = new int; // Request memory
    *pointer = 5; // Store value
    std::cout << *pointer << std::endl; // Use value
    delete pointer; // Free up the memory

    int *pnt = NULL; // Pointer initialized with null ; A Null Pointer
    pnt = new int[20]; // Request memory
    delete [] pnt; // Delete array pointed to by 'pnt'


    return 0;
}