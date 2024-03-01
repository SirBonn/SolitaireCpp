//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_CARD_H
#define SOLITAIRECPP_CARD_H

#include "string"

class Card {
private:
    std::string symb;
    char value;
    bool black;
    bool visibility;

public:
    Card(std::string _symb, char _value, bool _vis, bool color):symb(_symb),value(_value), visibility(_vis), black(color){}
    Card(std::string _symb, char _value, bool _color);
    Card();
    void printCard();
    std::string getSymb();
    void setSymb(std::string _symb);
    char getValue();
    void setValue(char _value);
    bool isVisible();
    void setVisvibility(bool _visibility);
    bool isBlack();
    void setColor(bool _isBlack);

};

#endif //SOLITAIRECPP_CARD_H
