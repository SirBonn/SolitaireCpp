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
    bool valuateCards(Card beforeCard, Card newCard);
    bool valuateMovement(Card newCard, Stack* stack);
    bool valuateDeck(Stack sortedDeck, Stack* deckSpace);
    void randomizeDeck(Queue* deck);

};
#endif //SOLITAIRECPP_REFEREE_H
