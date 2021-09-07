// =========================
// Name    : Clothing
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#include "clothing.h"

#include <sstream>

// Static Data Member(s) ============
int Clothing::nextClothingNumber = 1;
// ==================================

// Constructor(s) =======================================
// Default
Clothing::Clothing() {
    this->size = "null";
    this->color = "null";

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}

// Size Only
Clothing::Clothing(std::string size) {
    this->size = size;
    this->color = "null";

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}

// Main
Clothing::Clothing(std::string size, std::string color) {
    this->size = size;
    this->color = color;

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}
// ======================================================

// Mutator(s) ==============================
// Size
void Clothing::setSize(std::string size) {
    this->size = size;
}

// Color
void Clothing::setColor(std::string color) {
    this->color = color;
}
// =========================================

// Accessor(s) ==========================
// Size
std::string Clothing::getSize() const {
    return size;
}

// Color
std::string Clothing::getColor() const {
    return color;
}

// Clothing Number
int Clothing::getClothingNumber() const {
    return clothingNumber;
}
// ======================================

// Function(s) ====================================================================================================================
// Class Information Printer
std::string Clothing::info() const {
    std::ostringstream oSS;

    oSS << "Clothing " << getClothingNumber() << ": Clothing [size=" << getSize() << ", color=" << getColor() << "]" << std::flush;

    std::string objectInformation = oSS.str();

    return objectInformation;
}

// Wash Instructions Printer
std::string Clothing::wash() const {
    std::ostringstream oSS;

    oSS << "Wash with water and soap" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}

// Pack Instructions Printer
std::string Clothing::pack() const {
    std::ostringstream oSS;

    oSS << "Fold and store" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}
// ================================================================================================================================
