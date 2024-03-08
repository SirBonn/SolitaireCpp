//
// Created by ADMIN on 3/03/2024.
//

#ifndef SOLITAIRECPP_DNODE_H
#define SOLITAIRECPP_DNODE_H

#include "../solitaire/Card.h"

class DNode {

private:
    DNode *frontPtr;
    DNode *rearPtr;
    Card card;

public:
    DNode(Card _card): card(_card), frontPtr(nullptr), rearPtr(nullptr){}
    DNode();
    Card getCard();
    void setCard(Card _card);
    DNode* getFrPtr();
    DNode* getRrPtr();
    void setFrPtr(DNode* node);
    void setRrPtr(DNode* node);
};

#endif //SOLITAIRECPP_DNODE_H
