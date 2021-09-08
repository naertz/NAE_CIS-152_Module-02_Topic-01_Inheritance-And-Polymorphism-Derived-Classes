// =========================
// Name    : Shirt
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#ifndef SHIRT_H
#define SHIRT_H

#include "clothing.h"

#include <string>

class Shirt : public Clothing {
    public:
        Shirt();                                                             // Default Constructor
        Shirt(std::string sleeves);                                          // Main Constructor
        Shirt(std::string size, std::string color, std::string sleeves);     // Main Constructor with Delegated Base Constructor
        void setSize(std::string size);                                      // Overridden Size Mutator
        void setSleeves(std::string sleeves);                                // Sleeve Length Mutator
        std::string getSleeves() const;                                      // Sleeve Length Accessor
        std::string info() const;                                            // Overridden Class Information Printer
        std::string wash() const;                                            // Overridden Wash Instructions Printer
        std::string hang() const;                                            // Hang Instructions Printer
    private:
        std::string sleeves;                                                 // Sleeve Length
};

#endif // SHIRT_H
