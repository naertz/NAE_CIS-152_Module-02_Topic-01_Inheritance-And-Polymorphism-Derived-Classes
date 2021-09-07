// =========================
// Name    : Shirt
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// =========================

#include "shirt.h"

#include <sstream>

// Constructor(s) ===============================================================================================================
// Default
Shirt::Shirt() : Shirt(ValidateShirtParameters("M", "short")) { }

// Size and Sleeves Delegated (to Self)
Shirt::Shirt(std::string size, std::string sleeves) : Shirt(ValidateShirtParameters(size, sleeves)) { }

// Size and Sleeves Delegated (Self to Base)
Shirt::Shirt(ValidateShirtParameters shirtParameters) : Clothing(shirtParameters.getSize()) {
    this->sleeves = shirtParameters.getSleeves();
}

// Main Delegated (to Self)
Shirt::Shirt(std::string size, std::string color, std::string sleeves) : Shirt(ValidateShirtParameters(size, sleeves), color) { }

// Main Delegated (Self to Base)
Shirt::Shirt(ValidateShirtParameters shirtParameters, std::string color) : Clothing(shirtParameters.getSize(), color) {
    this->sleeves = shirtParameters.getSleeves();
}
// ==============================================================================================================================

// Mutator(s) ===============================
// Sleeve Length
void Shirt::setSleeves(std::string sleeves) {
    ValidateShirtParameters shirtParameters = ValidateShirtParameters(sleeves);

    this->sleeves = shirtParameters.getSleeves();
}
// ==========================================

// Accessor(s) ========================
// Sleeve Length
std::string Shirt::getSleeves() const {
    return sleeves;
}
// ====================================

// Function(s) =================================================================================================================================================
// Overidden Class Information Printer
std::string Shirt::info() const {
    std::ostringstream oSS;

    oSS << "Clothing " << getClothingNumber() << ": Shirt [size=" << getSize() << ", color=" << getColor() << ", sleeves=" << getSleeves() << "]" << std::flush;

    std::string objectInformation = oSS.str();

    return objectInformation;
}

// Overidden Wash Instructions Printer
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
