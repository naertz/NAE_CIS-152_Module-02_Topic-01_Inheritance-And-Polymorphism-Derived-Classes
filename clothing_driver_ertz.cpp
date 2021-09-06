/************************************************************************************************************************
* Name             : Inheritance And Polymorphism: SuperClass
* Author           : Noah Allan Ertz
* Created          : 08/30/2021
* Course           : CIS 152 - Data Structures
* Version          : 1.0
* OS               : Windows 10
* IDE              : Qt 5.12.5
* Copyright        : This is my own original work based on specifications issued by our instructor.
* Description      : Prints 6 Clothing objects, their manipulations, their instructions.
*                    Output: 6 Clothing objects' information, manipulations, and instructions each followed by a newline.
* Academic Honesty : I attest that this is my original work. I have not used unauthorized source code, either modified or
*                    unmodified. I have not given other fellow students access to my program.
************************************************************************************************************************/

#include "clothing.h"

#include <iostream>

int main() {
    // Create object with default constructor.
    Clothing largeBlack;                                           // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;                   // O(1)

    // Create object with size and color constructor.
    Clothing mediumBlue = { "medium", "blue" };                    // O(1)

    // Print object.
    std::cout << mediumBlue.info() << std::endl;                   // O(1)

    // Use mutators on first object.
    largeBlack.setSize("L");                                       // O(1)
    largeBlack.setColor("Black");                                  // O(1)

    // Print object.
    std::cout << largeBlack.info() << std::endl;                   // O(1)

    // Create objects with main constructor.
    Clothing smallRed = { "small", "red", -1, -1 };                // O(1)
    Clothing extraSmallBrown = { "xs", "brown", 0, 0 };            // O(1)
    Clothing extraLargeYellow = { "extra large", "yellow", 1, 1 }; // O(1)
    Clothing extraExtraLargeGreen = { "xxl", "green", 2, 2 };      // O(1)

    // Print objects and their instructions.
    std::cout << smallRed.info() << std::endl;                     // O(1)
    std::cout << smallRed.wash() << std::endl;                     // O(1)
    std::cout << smallRed.pack() << std::endl;                     // O(1)
    std::cout << extraSmallBrown.info() << std::endl;              // O(1)
    std::cout << extraSmallBrown.wash() << std::endl;              // O(1)
    std::cout << extraSmallBrown.pack() << std::endl;              // O(1)
    std::cout << extraLargeYellow.info() << std::endl;             // O(1)
    std::cout << extraLargeYellow.wash() << std::endl;             // O(1)
    std::cout << extraLargeYellow.pack() << std::endl;             // O(1)
    std::cout << extraExtraLargeGreen.info() << std::endl;         // O(1)
    std::cout << extraExtraLargeGreen.wash() << std::endl;         // O(1)
    std::cout << extraExtraLargeGreen.pack() << std::endl;         // O(1)
}

// O(1) * 21 = O(1)
