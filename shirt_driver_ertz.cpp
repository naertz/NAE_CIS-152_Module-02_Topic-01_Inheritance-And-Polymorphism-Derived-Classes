// =======================================================================================================================
// Name             : Shirt Driver
// Author           : Noah Allan Ertz
// Created          : 09/06/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints 3 Shirt objects, their manipulations, and their instructions.
//                    Output: 3 Shirt objects' information, manipulations, and instructions each followed by a newline.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source code, either modified or
//                    unmodified. I have not given other fellow students access to my program.
// =======================================================================================================================

#include "shirt_driver_ertz.h"

#include <iostream>

void shirtDriver() {
    // Create object with default constructor.
    Shirt largeLongBlack = Shirt();                   // O(1)

    // Print object.
    std::cout << largeLongBlack.info() << std::endl;  // O(1)

    // Use mutators on first object.
    largeLongBlack.setSize("L");                      // O(1)
    largeLongBlack.setColor("black");                 // O(1)
    largeLongBlack.setSleeves("long");                // O(1)

    // Print object.
    std::cout << largeLongBlack.info() << std::endl;  // O(1)

    // Create object with size and sleeves constructor.
    Shirt mediumNoneBlue = Shirt("M", "none");        // O(1)

    // Print object.
    std::cout << mediumNoneBlue.info() << std::endl;  // O(1)

    // Use mutator on second object.
    mediumNoneBlue.setColor("blue");                  // O(1)

    // Print object.
    std::cout << mediumNoneBlue.info() << std::endl;  // O(1)

    // Create object with main constructor.
    Shirt smallShortRed = Shirt("S", "red", "short"); // O(1)

    // Print object.
    std::cout << smallShortRed.info() << std::endl;   // O(1)

    // Print each object's instructions.
    std::cout << largeLongBlack.wash() << std::endl;  // O(1)
    std::cout << largeLongBlack.pack() << std::endl;  // O(1)
    std::cout << largeLongBlack.hang() << std::endl;  // O(1)
    std::cout << mediumNoneBlue.wash() << std::endl;  // O(1)
    std::cout << mediumNoneBlue.pack() << std::endl;  // O(1)
    std::cout << mediumNoneBlue.hang() << std::endl;  // O(1)
    std::cout << smallShortRed.wash() << std::endl;   // O(1)
    std::cout << smallShortRed.pack() << std::endl;   // O(1)
    std::cout << smallShortRed.hang() << std::endl;   // O(1)
}

// O(1) * 21 = O(1)
