//
// Created by ADMIN on 28/02/2024.
//

#ifndef SOLITAIRECPP_NODE_H
#define SOLITAIRECPP_NODE_H
#include "../solitaire/Card.h"

class Node{

private:
    Node *frontPtr;
    Card card;

public:
    Node(Card _card): card(_card), frontPtr(nullptr){}
    Node();
    Card getCard();
    void setCard(Card _card);
    Node* getFrPtr();
    void setPtr(Node* node);
};

#endif //SOLITAIRECPP_NODE_H
