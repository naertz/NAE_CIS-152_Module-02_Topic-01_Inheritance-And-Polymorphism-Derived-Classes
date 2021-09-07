// ===================================
// Name    : Validate Shirt Parameters
// Author  : Noah Allan Ertz
// Created : 09/06/2021
// ===================================

#ifndef VALIDATESHIRTPARAMETERS_H
#define VALIDATESHIRTPARAMETERS_H

#include <string>

class ValidateShirtParameters
{
    public:
        ValidateShirtParameters(std::string sleeves);                   // Sleeve Length Constructor
        ValidateShirtParameters(std::string size, std::string sleeves); // Main Constructor
        std::string getSize() const;                                    // Size Accessor
        std::string getSleeves() const;                                 // Sleeves Accessor
    private:
        std::string size;                                               // Size
        std::string sleeves;                                            // Sleeve Length
};

#endif // VALIDATESHIRTPARAMETERS_H
