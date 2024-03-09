//
// Created by ADMIN on 28/02/2024.
//
#include <iostream>
#include "Card.h"

Card::Card(std::string _symb, int _value, bool _color, int _pale) {
    symb = _symb;
    value = _value;
    black = _color;
    pale = _pale;
    visibility = false;
}

Card::Card() {

}

std::string Card::getSymb() {
    return symb;
}

void Card::setSymb(std::string _symb) {
    symb = _symb;
}

char Card::getValue() {
    return value;
}

void Card::setValue(char _value) {
    value = _value;
}

bool Card::isVisible() {
    return visibility;
}

void Card::setVisvibility(bool _visibility) {
    visibility = _visibility;
}

bool Card::isBlack() {
    return black;
}

void Card::setColor(bool _isBlack) {
    black = _isBlack;
}

void Card::printCard() {

    if (!isVisible()) {

        if (value < 11) {
            std::cout << value << " " << symb << " " << black;
        } else if (value ==11) {
            std::cout <<  "J " << symb << " " << black;
        } else if (value ==12){
            std::cout <<  "Q " << symb << " " << black;
        } else if (value == 13){
            std::cout <<  "K " << symb << " " << black;
        }

    } else {

    }
}

int Card::getPale() {
    return pale;
}

