// ====================================================================================================================
// Name             : Pants Driver
// Author           : Noah Allan Ertz
// Created          : 09/06/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints 3 Pants objects, their manipulations, and their instructions.
//                    Output: 3 Pants objects' information, manipulations, and instructions each followed by a newline.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source code, either modified
//                    or unmodified. I have not given other fellow students access to my program.
// ====================================================================================================================

#include "pants_driver_ertz.h"

#include <iostream>

void pantsDriver() {
    // Create object with default constructor.
    Pants largeBlack = Pants();                               // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;              // O(1)

    // Use mutators on first object.
    largeBlack.setSize("40x32");                              // O(1)
    largeBlack.setColor("black");                             // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;              // O(1)

    // Create object with size constructor.
    Pants mediumBlue = Pants("32x32");                        // O(1)

    // Print object.
    std::cout << mediumBlue.info() << std::endl;              // O(1)

    // Use mutator on second object.
    mediumBlue.setColor("blue");                              // O(1)

    // Print object.
    std::cout << mediumBlue.info() << std::endl;              // O(1)

    // Create object with main constructor.
    Pants smallRed = Pants("28x30", "red");                   // O(1)

    // Print object.
    std::cout << smallRed.info() << std::endl;                // O(1)

    // Print each object's accessors.
    std::cout << largeBlack.getClothingNumber() << std::endl; // O(1)
    std::cout << largeBlack.getSize() << std::endl;           // O(1)
    std::cout << largeBlack.getColor() << std::endl;          // O(1)
    std::cout << mediumBlue.getClothingNumber() << std::endl; // O(1)
    std::cout << mediumBlue.getSize() << std::endl;           // O(1)
    std::cout << mediumBlue.getColor() << std::endl;          // O(1)
    std::cout << smallRed.getClothingNumber() << std::endl;   // O(1)
    std::cout << smallRed.getSize() << std::endl;             // O(1)
    std::cout << smallRed.getColor() << std::endl;            // O(1)

    // Print each object's instructions.
    std::cout << largeBlack.wash() << std::endl;              // O(1)
    std::cout << largeBlack.pack() << std::endl;              // O(1)
    std::cout << largeBlack.hang() << std::endl;              // O(1)
    std::cout << mediumBlue.wash() << std::endl;              // O(1)
    std::cout << mediumBlue.pack() << std::endl;              // O(1)
    std::cout << mediumBlue.hang() << std::endl;              // O(1)
    std::cout << smallRed.wash() << std::endl;                // O(1)
    std::cout << smallRed.pack() << std::endl;                // O(1)
    std::cout << smallRed.hang() << std::endl;                // O(1)
}

// O(1) * 29 = O(1)
