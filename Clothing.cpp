/**************************
* Name    : Clothing
* Author  : Noah Allan Ertz
* Created : 08/30/2021
**************************/

#include "Clothing.h"

#include <sstream>

/**********************
* Static Data Member(s)
**********************/

int Clothing::nextClothingNumber = 1;

/***************
* Constructor(s)
***************/

/**********************************************
* Name             : Clothing
* Description      : Default no-arg constructor
* Input Parameters : None
**********************************************/

Clothing::Clothing() {
    this->size = "null";
    this->color = "null";
    this->washInstructions = 0;
    this->packInstructions = 0;

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}

/*******************************************************
* Name             : Clothing
* Description      : Size and color constructor
* Input Parameters : std::string size, std::string color
*******************************************************/

Clothing::Clothing(std::string size, std::string color) {
    this->size = size;
    this->color = color;
    this->washInstructions = 0;
    this->packInstructions = 0;

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}

/***************************************************************************************************
* Name             : Clothing
* Description      : Main constructor
* Input Parameters : std::string size, std::string color, int washInstructions, int packInstructions
***************************************************************************************************/

Clothing::Clothing(std::string size, std::string color, int washInstructions, int packInstructions) {
    this->size = size;
    this->color = color;
    this->washInstructions = washInstructions;
    this->packInstructions = packInstructions;

    this->clothingNumber = nextClothingNumber;
    ++nextClothingNumber;
}

/***********
* Mutator(s)
***********/

void Clothing::setSize(std::string size) {
    this->size = size;
}

void Clothing::setColor(std::string color) {
    this->color = color;
}

void Clothing::setWashInstructions(int washInstructions) {
    this->washInstructions = washInstructions;
}

void Clothing::setPackInstructions(int packInstructions) {
    this->packInstructions = packInstructions;
}

/************
* Accessor(s)
************/

std::string Clothing::getSize() const {
    return size;
}

std::string Clothing::getColor() const {
    return color;
}

int Clothing::getWashInstructions() const {
    return washInstructions;
}

int Clothing::getPackInstructions() const {
    return packInstructions;
}

int Clothing::getClothingNumber() const {
    return clothingNumber;
}

/************
* Function(s)
************/

/***************************************************
* Name        : Class Information
* Description : Returns Clothing object information.
* Output      : std::string objectInformation
***************************************************/

std::string Clothing::info() const {
    std::ostringstream oSS;
    oSS << "Clothing " << getClothingNumber() << ": Clothing [size=" << getSize() << ", color=" << getColor() << "]" << std::flush;
    std::string objectInformation = oSS.str();
    return objectInformation;
}

/*****************************************
* Name        : Wash Instructions Printer
* Description : Returns wash instructions.
* Output      : std::string instructions
*****************************************/

std::string Clothing::wash() const {
    std::ostringstream oSS;
    if (getWashInstructions() <= 0) {
        oSS << "Wash in cold water" << std::flush;
    } else if (getWashInstructions() == 1) {
        oSS << "Wash in warm water" << std::flush;
    } else {
        oSS << "Wash in hot water" << std::flush;
    }
    std::string instructions = oSS.str();
    return instructions;
}

/*****************************************
* Name        : Pack Instructions Printer
* Description : Returns pack instructions.
* Output      : std::string instructions
*****************************************/

std::string Clothing::pack() const {
    std::ostringstream oSS;
    if (getPackInstructions() <= 0) {
        oSS << "Fold" << std::flush;
    } else {
        oSS << "Hang" << std::flush;
    }
    std::string instructions = oSS.str();
    return instructions;
}
