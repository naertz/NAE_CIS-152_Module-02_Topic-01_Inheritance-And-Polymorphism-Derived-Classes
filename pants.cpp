// =========================
// Name    : Pants
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#include "pants.h"

#include <sstream>

// Constructor(s) ===========================================================
// Default
Pants::Pants() : Clothing() { }

// Size
Pants::Pants(std::string size) : Clothing(size) { }

// Main
Pants::Pants(std::string size, std::string color) : Clothing(size, color) { }
// ==========================================================================

// Function(s) =================================================================================================================
// Overidden Class Information Printer
std::string Pants::info() const {
    std::ostringstream oSS;

    oSS << "Clothing " << getClothingNumber() << ": Pants [size=" << getSize() << ", color=" << getColor() << "]" << std::flush;

    std::string objectInformation = oSS.str();

    return objectInformation;
}

// Overidden Wash Instructions Printer
std::string Pants::wash() const {
    std::ostringstream oSS;

    oSS << "Dry clean only" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}

// Hang Instructions Printer
std::string Pants::hang() const {
    std::ostringstream oSS;

    oSS << "Fold pants on hanger and hang" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}
// =============================================================================================================================
