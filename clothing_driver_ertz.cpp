// =======================================================================================================================
// Name             : Clothing Driver
// Author           : Noah Allan Ertz
// Created          : 09/06/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints 3 Clothing objects, their manipulations, and their instructions.
//                    Output: 3 Clothing objects' information, manipulations, and instructions each followed by a newline.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source code, either modified or
//                    unmodified. I have not given other fellow students access to my program.
// =======================================================================================================================

#include "clothing.h"

#include <iostream>

void clothingDriver() {
    // Create object with default constructor.
    Clothing largeBlack = Clothing();             // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;  // O(1)

    // Use mutators on first object.
    largeBlack.setSize("large");                  // O(1)
    largeBlack.setColor("black");                 // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;  // O(1)

    // Create object with size constructor.
    Clothing mediumBlue = Clothing("medium");     // O(1)

    // Print object.
    std::cout << mediumBlue.info() << std::endl;  // O(1)

    // Use mutator on second object.
    mediumBlue.setColor("blue");                  // O(1)

    // Print object.
    std::cout << mediumBlue.info() << std::endl;  // O(1)

    // Create object with main constructor.
    Clothing smallRed = Clothing("small", "red"); // O(1)

    // Print object.
    std::cout << smallRed.info() << std::endl;    // O(1)

    // Print each object's instructions.
    std::cout << largeBlack.wash() << std::endl;  // O(1)
    std::cout << largeBlack.pack() << std::endl;  // O(1)
    std::cout << mediumBlue.wash() << std::endl;  // O(1)
    std::cout << mediumBlue.pack() << std::endl;  // O(1)
    std::cout << smallRed.wash() << std::endl;    // O(1)
    std::cout << smallRed.pack() << std::endl;    // O(1)
}

// O(1) * 17 = O(1)
