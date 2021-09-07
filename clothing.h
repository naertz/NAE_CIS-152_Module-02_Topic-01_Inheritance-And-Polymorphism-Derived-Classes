// =========================
// Name    : Clothing
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#ifndef CLOTHING_H
#define CLOTHING_H

#include <string>

class Clothing {
    public:
        Clothing();                                    // Default Constructor
        Clothing(std::string size);                    // Size Constructor
        Clothing(std::string size, std::string color); // Main Constructor
        void setSize(std::string size);                // Size Mutator
        void setColor(std::string color);              // Color Mutator
        std::string getSize() const;                   // Size Accessor
        std::string getColor() const;                  // Color Accessor
        int getClothingNumber() const;                 // Clothing Number Accessor
        std::string info() const;                      // Class Information Printer
        std::string wash() const;                      // Wash Instructions Printer
        std::string pack() const;                      // Pack Instructions Printer
    private:
        std::string size;                              // Size
        std::string color;                             // Color
        int clothingNumber;                            // Clothing Number
        static int nextClothingNumber;                 // Clothing Number Iterator
};

#endif // CLOTHING_H
