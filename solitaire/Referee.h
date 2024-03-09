//
// Created by ADMIN on 29/02/2024.
//

#ifndef SOLITAIRECPP_REFEREE_H
#define SOLITAIRECPP_REFEREE_H

#include "Card.h"
#include "../dataStructures/Stack.h"
#include "../dataStructures/Queue.h"

class Referee{

private:

public:
    Referee();
    bool valuateMovement(Card newCard, Stack* stack);
    void randomizeDeck(Queue* deck);

};
#endif //SOLITAIRECPP_REFEREE_H
