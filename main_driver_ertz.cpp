// =================================================================================================
// Name             : Main Driver
// Author           : Noah Allan Ertz
// Created          : 09/06/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Runs three drivers.
//                    Output: Clothing driver output, Pants driver output, Shirt driver output
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "clothing_driver_ertz.h"
#include "pants_driver_ertz.h"
#include "shirt_driver_ertz.h"

#include <iostream>

int main() {
    std::cout << "Clothing Driver:" << std::endl << std::endl;           // O(1)
    clothingDriver();                                                    // O(1)
    std::cout << std::endl << "Pants Driver:" << std::endl << std::endl; // O(1)
    pantsDriver();                                                       // O(1)
    std::cout << std::endl << "Shirt Driver:" << std::endl << std::endl; // O(1)
    shirtDriver();                                                       // O(1)

    return 0;                                                            // O(1)
}

// O(1) * 7 = O(1)
