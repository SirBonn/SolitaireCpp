//
// Created by ADMIN on 28/02/2024.
//
#include "Card.h"

Card::Card(std::string _symb, int _value) {
    symb=_symb;
    value=_value;
}

Card::Card() {

}

std::string Card::getSymb() {
    return symb;
}

void Card::setSymb(std::string _symb) {
    symb = _symb;
}

int Card::getValue() {
    return value;
}

void Card::setValue(int _value) {
    value=_value;
}

bool Card::isVisible() {
    return visibility;
}

void Card::setVisvibility(bool _visibility) {
    visibility=_visibility
}

