//
// Created by ADMIN on 29/02/2024.
//

#ifndef SOLITAIRECPP_REFEREE_H
#define SOLITAIRECPP_REFEREE_H

#include "Card.h"
#include "../dataStructures/Queue.h"
#include "../dataStructures/Stack.h"

class Referee{

private:

public:
    Referee();
    bool valuateCards(Card beforeCard, Card newCard);
    bool valuateMovement(Card beforeCard, Card newCard);
    bool valuateDeck(Queue sortedDeck, Queue* deckSpace);
    void randomizeDeck(Stack* deck);

};
#endif //SOLITAIRECPP_REFEREE_H
