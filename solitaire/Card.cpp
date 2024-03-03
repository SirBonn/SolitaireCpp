//
// Created by ADMIN on 28/02/2024.
//
#include <iostream>
#include "Card.h"

Card::Card(std::string _symb, char _value, bool _color) {
    symb=_symb;
    value=_value;
    black= _color;
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
    value=_value;
}

bool Card::isVisible() {
    return visibility;
}

void Card::setVisvibility(bool _visibility) {
    visibility=_visibility;
}

bool Card::isBlack(){
    return black;
}

void Card::setColor(bool _isBlack) {
    black=_isBlack;
}

void Card::printCard() {

if(value<70){
    int number = value - 47;
    std::cout<<number<<" "<<symb<<" "<<black;
} else {
    std::cout<<value<<" "<<symb<<" "<<black;
}
}

