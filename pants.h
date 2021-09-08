// =========================
// Name    : Pants
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#ifndef PANTS_H
#define PANTS_H

#include "clothing.h"

#include <string>

class Pants : public Clothing {
    public:
        Pants();                                    // Default Constructor
        Pants(std::string size);                    // Size Constructor
        Pants(std::string size, std::string color); // Main Constructor
        std::string info() const;                   // Overridden Class Information Printer
        std::string wash() const;                   // Overridden Wash Instructions Printer
        std::string hang() const;                   // Hang Instructions Printer
};

#endif // PANTS_H
