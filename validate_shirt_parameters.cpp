// ===================================
// Name    : Validate Shirt Parameters
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// ===================================

#include "validate_shirt_parameters.h"

// Constructor(s) =======================================================================
// Sleeve Length
ValidateShirtParameters::ValidateShirtParameters(std::string sleeves) {
    if (sleeves != "none" && sleeves != "short" && sleeves != "long") {
        this->sleeves = "short";
    } else {
        this->sleeves = sleeves;
    }
}

// Main
ValidateShirtParameters::ValidateShirtParameters(std::string size, std::string sleeves) {
    if (size != "S" && size != "M" && size != "L") {
        this->size = "M";
    } else {
        this->size = size;
    }

    if (sleeves != "none" && sleeves != "short" && sleeves != "long") {
        this->sleeves = "short";
    } else {
        this->sleeves = sleeves;
    }
}
// ======================================================================================

// Accessor(s) ==========================================
// Size
std::string ValidateShirtParameters::getSize() const {
    return size;
}

// Sleeve Length
std::string ValidateShirtParameters::getSleeves() const {
    return sleeves;
}
// ======================================================
