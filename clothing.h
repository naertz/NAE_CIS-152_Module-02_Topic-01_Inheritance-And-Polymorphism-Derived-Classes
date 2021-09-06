/**************************
* Name    : Clothing
* Author  : Noah Allan Ertz
* Created : 08/30/2021
**************************/

#ifndef CLOTHING_H
#define CLOTHING_H

#include <string>

class Clothing {
    public:
        Clothing();                                                                                // Default Constructor
        Clothing(std::string size, std::string color);                                             // Size And Color Constructor
        Clothing(std::string size, std::string color, int washInstructions, int packInstructions); // Main Constructor
        void setSize(std::string size);                                                            // Size Mutator
        void setColor(std::string color);                                                          // Color Mutator
        void setWashInstructions(int washInstructions);                                            // Wash Instructions Mutator
        void setPackInstructions(int packInstructions);                                            // Pack Instructions Mutator
        std::string getSize() const;                                                               // Size Accessor
        std::string getColor() const;                                                              // Color Accessor
        int getWashInstructions() const;                                                           // Wash Instructions Accessor
        int getPackInstructions() const;                                                           // Pack Instructions Accessor
        int getClothingNumber() const;                                                             // Clothing Number Accessor
        std::string info() const;                                                                  // Class Information
        std::string wash() const;                                                                  // Wash Instructions Printer
        std::string pack() const;                                                                  // Pack Instructions Printer
    private:
        std::string size;                                                                          // Size
        std::string color;                                                                         // Color
        int washInstructions;                                                                      // Wash Instructions
        int packInstructions;                                                                      // Pack Instructions
        int clothingNumber;                                                                        // Clothing Number
        static int nextClothingNumber;                                                             // Clothing Number Iterator
};

#endif // CLOTHING_H
