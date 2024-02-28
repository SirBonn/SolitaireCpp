//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_CARD_H
#define SOLITAIRECPP_CARD_H

#include "string"

class Card {
private:
    std::string symb;
    int value;
    bool visibility;

public:
    Card(std::string _symb, int _value, bool _vis):symb(_symb),value(_value), visibility(_vis){}
    Card(std::string _symb, int _value);
    Card();
    std::string getSymb();
    void setSymb(std::string _symb);
    int getValue();
    void setValue(int _value);
    bool isVisible();
    void setVisvibility(bool _visibility);

};

#endif //SOLITAIRECPP_CARD_H
