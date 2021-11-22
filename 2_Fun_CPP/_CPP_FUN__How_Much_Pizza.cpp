// How Much Pizza is Needed?
// 
// NAME:        totalpizza.cpp
// VERSION:     0.0.0
// AUTHOR:      Jesse Leverett (CyberThulhu)
// STATUS:      Work In Progress
// DESCRIPTION: Basic Program that Finds How much Pizza Is Needed.
// TO-DO:       Build Initial Code Framework
// USAGE:       totalpizza.exe
// COPYRIGHT © 2021 Jesse Leverett

#include <iostream>

using namespace std;

/*
How to find out How many Boxes of Pizza are needed for a Crowd
*/

int main() {

    int oneBox, totalPeople, totalSlices, totalPizza, totalBoxes, slicesEaten, remainderSlices;
    
    oneBox = 8; // One Box of Pizza has 8 Slices

    // How many People do you have total?
    std::cout << "How many people do you have?: " << std::endl;
    std::cin >> totalPeople;

    // How many Slices per Person
    std::cout << "How many slices of pizza per person?: " << std::endl;
    std::cin >> totalSlices;
    totalPizza = totalPeople * totalSlices; // How many Slices total needed

    totalBoxes = totalPizza / oneBox;
    
    slicesEaten = totalPizza % oneBox;
    if (slicesEaten != 0) {
        totalBoxes++;
    }

    remainderSlices = oneBox - slicesEaten;

    std::cout << "Total Boxes Need: " << totalBoxes << std::endl;
    std::cout << "Total Remainder: " << remainderSlices << std::endl;

    return 0;
}