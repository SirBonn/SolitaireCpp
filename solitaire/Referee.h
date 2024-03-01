//
// Created by ADMIN on 29/02/2024.
//

#ifndef SOLITAIRECPP_REFEREE_H
#define SOLITAIRECPP_REFEREE_H

#include "Card.h"
#include "../dataStructures/Queue.h"

class Referee{

private:

public:
    bool valuateCards(Card beforeCard, Card newCard);
    bool valuateMovement(Card beforeCard, Card newCard);
    bool valuateDeck(Queue sortedDeck, Queue* deckSpace);
    

};
#endif //SOLITAIRECPP_REFEREE_H
