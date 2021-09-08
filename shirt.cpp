// =========================
// Name    : Shirt
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#include "shirt.h"

#include <sstream>

// Global Static Function(s) ==========================================
// Size Validator
static std::string validateSize(const std::string& size) {
    std::string validatedSize = "M";

    if (size != "S" && size != "M" && size != "L") {
            validatedSize = "M";
        } else {
            validatedSize = size;
        }

    return validatedSize;
}

// Sleeve Length Validator
static std::string validateSleeves(const std::string& sleeves) {
    std::string validatedSleeves = "short";

    if (sleeves != "none" && sleeves != "short" && sleeves != "long") {
            validatedSleeves = "short";
        } else {
            validatedSleeves = sleeves;
        }

    return validatedSleeves;
}
// ====================================================================

// Constructor(s) ============================================================================================
// Default
Shirt::Shirt() : Clothing(validateSize("M")) {
    this->sleeves = validateSleeves("short");
}

// Main
Shirt::Shirt(std::string sleeves) : Clothing(validateSize("M")) {
    this->sleeves = validateSleeves(sleeves);
}

// Main with Delegated Base
Shirt::Shirt(std::string size, std::string color, std::string sleeves) : Clothing(validateSize(size), color) {
    this->sleeves = validateSleeves(sleeves);
}
// ===========================================================================================================

// Mutator(s) ===============================
// Overridden Size
void Shirt::setSize(std::string size) {
    Clothing::setSize(validateSize(size));
}

// Sleeve Length
void Shirt::setSleeves(std::string sleeves) {
    this->sleeves = validateSleeves(sleeves);
}
// ==========================================

// Accessor(s) ========================
// Sleeve Length
std::string Shirt::getSleeves() const {
    return sleeves;
}
// ====================================

// Function(s) =================================================================================================================================================
// Overridden Class Information Printer
std::string Shirt::info() const {
    std::ostringstream oSS;

    oSS << "Clothing " << getClothingNumber() << ": Shirt [size=" << getSize() << ", color=" << getColor() << ", sleeves=" << getSleeves() << "]" << std::flush;

    std::string objectInformation = oSS.str();

    return objectInformation;
}

// Overridden Wash Instructions Printer
std::string Shirt::wash() const {
    std::ostringstream oSS;

    oSS << "Dry clean only" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}

// Hang Instructions Printer
std::string Shirt::hang() const {
    std::ostringstream oSS;

    oSS << "Place hanger inside shirt and hang" << std::flush;

    std::string instructions = oSS.str();

    return instructions;
}
// =============================================================================================================================================================
