// =========================
// Name    : Shirt
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#ifndef SHIRT_H
#define SHIRT_H

#include "clothing.h"
#include "validate_shirt_parameters.h"

#include <string>

class Shirt : public Clothing {
    public:
        Shirt();                                                             // Default Constructor
        Shirt(std::string size, std::string sleeves);                        // Size and Sleeves Delegated Constructor (to Self)
        Shirt(ValidateShirtParameters shirtParameters);                      // Size and Sleeves Delegated Constructor (Self to Base)
        Shirt(std::string size, std::string color, std::string sleeves);     // Main Delegated Constructor (to Self)
        Shirt(ValidateShirtParameters shirtParameters, std::string sleeves); // Main Delegated Constructor (Self to Base)
        void setSleeves(std::string sleeves);                                // Sleeve Length Mutator
        std::string getSleeves() const;                                      // Sleeve Length Accessor
        std::string info() const;                                            // Overidden Class Information Printer
        std::string wash() const;                                            // Overidden Wash Instructions Printer
        std::string hang() const;                                            // Hang Instructions Printer
    private:
        std::string sleeves;                                                 // Sleeve Length
};

#endif // SHIRT_H
